function [associationSeg,vp_info,euler_angles,runTime]=onlinefR(linesSegments,parameters)

linesRecoveredP=linesSegments.linesSeg;
%remove the line segments shorter than 1 pixel
lineLength=sqrt(sum((linesRecoveredP(:,1:2)-linesRecoveredP(:,3:4)).^2,2));
threshold=1;
line_sub=linesRecoveredP(lineLength>threshold,:);
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
pp=parameters.pp;
test_inits=parameters.test_inits;
sampleFocal=parameters.focal_range;
gd=parameters.gd;
ublb=parameters.ublb;
pdfdhtable=parameters.pdfdhtable;
pdfdvtable=parameters.pdfdvtable;
focal=parameters.focal;

paramS=[0.445175656615196,0.262438160101957,0.00980884476515174,0.0137715966528598,0.0299480231808897];
%Estimate manhatton frame association
if focal==0
    [vp_temp,final_likelihoods,focal,~,~,~,runTime] = VP_estimation_Method6(test_inits, ublb, line_sub, paramS, sampleFocal, pp,gd,pdfdhtable,pdfdvtable);
end

vp_f = vp_temp(end-2:end,:);
maxlikelihood=final_likelihoods;
euler_angles=[];

[associationSeg] = evaluate_line_associations2(linesRecoveredP, vp_f, pp, focal,paramS,pdfdhtable,pdfdvtable);

vp_info=struct();
vp_info.vp=vp_f;

vp_info.pp=pp;
vp_info.focal=focal;
vp_info.maxlikelihood=maxlikelihood;

end