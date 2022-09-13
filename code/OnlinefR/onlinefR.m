function [associationSeg,vp_info,rotation,runTime]=onlinefR(linesSegments,parameters)

line_sub=linesSegments.linesSeg;
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
pp=parameters.pp;
test_inits=parameters.test_inits;
sampleFocal=parameters.focal_range;
gd=parameters.gd;
ublb=parameters.ublb;
pdfdhtable=parameters.pdfdhtable;
pdfdvtable=parameters.pdfdvtable;
focal=parameters.focal;
maxIter=parameters.maxIter;
paramS=[0.445175656615196,0.262438160101957,0.00980884476515174,0.0137715966528598,0.0299480231808897];
%Estimate manhatton frame association
if focal==0
    [vp_temp,final_likelihoods,focal,~,~,~,runTime] = VP_estimation_Method(test_inits, ublb, line_sub, paramS, sampleFocal, pp,gd,pdfdhtable,pdfdvtable,maxIter);
else
    [vp_temp,final_likelihoods,focal,~,~,~,runTime] = VP_estimation_Method_focal(test_inits, ublb, line_sub, paramS, focal, pp,gd,pdfdhtable,pdfdvtable,maxIter);
end

vp_f = vp_temp(end-2:end,:);
maxlikelihood=final_likelihoods;
[associationSeg] = evaluate_line_associations(line_sub, vp_f, pp, focal,paramS,pdfdhtable,pdfdvtable);

vp_info=struct();
vp_info.vp=vp_f;

vp_info.pp=pp;
vp_info.focal=focal;
vp_info.maxlikelihood=maxlikelihood;

points2D=projectworld2Image(vp_f',focal,pp)-pp;
angles=atand(abs(points2D(:,2)./points2D(:,1)));
ind=find(angles>60);
[~,hInd]=max(abs(points2D(ind,2)));
if ind(hInd)~=2
    temp=vp_f;
    vp_f(:,2)=temp(:,ind(hInd));
    vp_f(:,ind(hInd))=temp(:,2);
end
points2D=projectworld2Image(vp_f',focal,pp)';
points3D=[points2D;ones(1,3)*focal];
points3D(1,:)=points3D(1,:)-pp(1);
points3D(2,:)=points3D(2,:)-pp(2);
points3D(:,1)=points3D(:,1)/norm(points3D(:,1));
points3D(:,2)=points3D(:,2)/norm(points3D(:,2));
points3D(:,3)=points3D(:,3)/norm(points3D(:,3));
rotM=points3D;
rotM(:,1)=-points3D(:,1);
rotM(:,2)=-points3D(:,3);
rotM(:,3)=-points3D(:,2);

rollest=atand(rotM(1,3)/rotM(2,3));
tiltest=atand(-rotM(3,3)/rotM(2,3));
rotation.roll=rollest;
rotation.tilt=tiltest;

end