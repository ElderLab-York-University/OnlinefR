function [final_vp,final_likelihoods,focal,result,data,final_all_samples,runTime] = VP_estimation_Method_focal(test_inits,ublb, lineData, mixParams, focal, pp,gd,pdfdhtable,pdfdvtable,maxIter)
runTime=zeros(5,1);
tic;
[M,N,P,~,~] = size(test_inits);
maxPosition=zeros(M,N,P);
lineDataAll=struct();
lineDataAll.middle=(lineData(:,1:2)+lineData(:,3:4))/2;
lineDataAll.length=sqrt(sum((lineData(:,1:2)-lineData(:,3:4)).^2,2));
v2=lineData(:,1:2)-lineData(:,3:4);
v2=v2./sqrt(sum(v2.^2,2));
lineDataAll.v2=v2;


for i = 1:M
    for j = 1:N
        for k=1:P
            [maxPosition(i,j,k),~] = evaluateVPModelLikelihood_Method(lineDataAll,mixParams, squeeze(test_inits(i,j,k,:,:)),focal,pp,pdfdhtable,pdfdvtable);
        end
    end
end

runTime(1)=toc;

options = optimoptions(@fmincon,'Display','off','Algorithm','interior-point','MaxIter',maxIter);

tic;
numgd=gd;


result=zeros(1,4);

data=struct();
final_all_samples=maxPosition;
[val,indk]=maxk(maxPosition(:),numgd);
max_finalLikelihood=val(1);
[r,c,h,w]=ind2sub(size(maxPosition),indk(1));
maxvp=squeeze(test_inits(c,h,w,:,:));

for i=1:numgd
    ind=indk(i);
    [r,c,h,w]=ind2sub(size(maxPosition),ind);
    euler_angles=rotm2eul(squeeze(test_inits(c,h,w,:,:)),'XYZ');
    [final_vp, final_likelihoods, ~,focal] = Quasi_Newton_fminunc_EulerAngles_Method(euler_angles,mixParams, lineDataAll, focal, pp,ublb,pdfdhtable,pdfdvtable,options);
    
    if final_likelihoods>max_finalLikelihood
        max_finalLikelihood=final_likelihoods;
        maxvp=final_vp;
    end
    runTime(i+1)=toc;
end
final_vp=maxvp;
final_likelihoods=max_finalLikelihood;


end