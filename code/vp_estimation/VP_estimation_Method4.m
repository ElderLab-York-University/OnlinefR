function [final_vp,final_likelihoods,focal,result,data,final_all_samples,runTime] = VP_estimation_Method4(hor_range,ver_range,roll_range, ublb, lineData, mixParams, sampleFocal, pp, pixelOffset,fmin_options,gd,pdfdv,pdfdh)
runTime=zeros(gd+1,1);
tic;
%get all of the potential starting positions by uniformly sampling around
%the vertical axis
numPotential=length(hor_range);
test_inits = compute_Equal_Spaced_CoordFrames_init_hor_roll_and_ver2(eye(3), hor_range, ver_range,roll_range);
[M,N,P,Q] = size(test_inits);
%get starting euler angles associated to the equally spaced coordinates
%frames.  NOTE you have to add the minus sign to be equivalent when using
%the rotateCoordinateFrame_usingManhattanWorldMethod() function.
starting_euler_angles = zeros(numPotential, M);
for i = 1:3:M-2
    starting_euler_angles(:,i) = -((pi/2)/numPotential).*(0:numPotential-1)';
end
count = 0;
for i = 2:3:M-1
    count = count + 1;
    starting_euler_angles(:,i) = -(deg2rad(ver_range(count)))';
end
%go through each potential point and evaluate model likelihood

frameAll=zeros(3,3,length(sampleFocal),numPotential,M/3,Q);
maxPosition=zeros(length(sampleFocal),numPotential,M/3,Q);
ytabv = icdf(pdfdv,1-eps)*[0:0.001:1]; %sample angle
prob_v = mixParams(1)*pdf(pdfdv,ytabv);
pdfdvtable=[ytabv',prob_v'];
ytabh = icdf(pdfdh,1-eps)*[0:0.001:1]; %sample angle
prob_h1 = mixParams(2)*pdf(pdfdh,ytabh);
pdfdhtable=[ytabh',prob_h1'];

lineDataAll=struct();
lineDataAll.middle=(lineData(:,1:2)+lineData(:,3:4))/2;
lineDataAll.length=sqrt(sum((lineData(:,1:2)-lineData(:,3:4)).^2,2));
v2=lineData(:,1:2)-lineData(:,3:4);
v2=v2./sqrt(sum(v2.^2,2));
lineDataAll.v2=v2;

for p =1:length(sampleFocal)
    for i = 1:numPotential
        for j = 1:(M/3)
            pos = (j-1)*3 + 1;
            for k=1:Q
                [maxPosition(p,i,j,k),~] = evaluateVPModelLikelihood_Method4v2(lineDataAll,mixParams, test_inits(pos:pos+2,:,i,k),sampleFocal(p),pp, pixelOffset,pdfdhtable,pdfdvtable);
                frameAll(:,:,p,i,j,k)=test_inits(pos:pos+2,:,i,k);
            end
        end
    end
    
end

runTime(1)=toc;

tic;
numgd=gd;
max_finalLikelihood=-inf;
result=zeros(1,4);
data=struct();
final_all_samples=maxPosition;

for i=1:numgd
    [val,ind]=max(maxPosition(:));
    [r,c,h,w]=ind2sub(size(maxPosition),ind);
    
    euler_angles=rotm2eul(frameAll(:,:,r,c,h,w),'XYZ');
    if length(sampleFocal)>1
    [final_vp, final_likelihoods, ~,focal] = Quasi_Newton_fminunc_EulerAngles_Method4v2(euler_angles,mixParams, lineDataAll, sampleFocal(r), pp, pixelOffset,ublb,pdfdhtable,pdfdvtable);
    else
            [final_vp, final_likelihoods, ~,focal] = Quasi_Newton_fminunc_EulerAngles_MethodNoFocalv2(euler_angles,mixParams, lineDataAll, sampleFocal(r), pp, pixelOffset,ublb,pdfdhtable,pdfdvtable);
    end
    if final_likelihoods>max_finalLikelihood
        max_finalLikelihood=final_likelihoods;
        finalfocal=focal;
        maxvp=final_vp;
    end
    maxPosition(r,c,h,w)=-inf;
    runTime(i+1)=toc;
end
final_vp=maxvp;
final_likelihoods=max_finalLikelihood;
focal=finalfocal;


end