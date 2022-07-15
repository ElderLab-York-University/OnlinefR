function [associationSeg,vp_info,runTime]=manhattanFrameEstimationMethod4(line_sub,focal,pp, pixelSize,gd,sp,max_ver,max_roll,max_hor,angle_min_max)

load('pdfData.mat');
fOps = 35;
fmin_options = getOptionsValuesForOptimization('fminunc', fOps);

focal_min_max=(pp(1)./tand(angle_min_max/2))*pixelSize;
ublb= [deg2rad(-max_ver),-pi/2,deg2rad(-max_roll),focal_min_max(2);
    deg2rad(max_ver), pi/2,deg2rad(max_roll),focal_min_max(1)];
ver_range=-max_ver:max_ver*2/(sp+1):max_ver;
roll_range=-max_roll:max_roll*2/(sp+1):max_roll;
hor_range=-max_hor:max_hor*2/(sp+1):max_hor;

ver_range=ver_range(2:end-1);
roll_range=roll_range(2:end-1);

hor_range=hor_range(2:end-1);
if focal==0
    focal_range= focal_min_max(2):(focal_min_max(1)-focal_min_max(2))/(sp+1):focal_min_max(1);
    focal_range=focal_range(2:end-1);
else
    focal_range=focal*pixelSize;
end

paramS=[0.445175656615196,0.262438160101957,0.00980884476515174,0.0137715966528598,0.0299480231808897];
[vp_temp,~,focal,~,~,~,runTime] = VP_estimation_Method4(hor_range,ver_range,roll_range, ublb, line_sub, paramS, focal_range, pp, pixelSize,fmin_options,gd,pdfdv,pdfdh);

vp_f = vp_temp(end-2:end,:);

[associationSeg] = evaluate_line_associations2(line_sub, vp_f, pp, focal, pixelSize,paramS,pdfdv,pdfdh);


vp_info=struct();
vp_info.vp=vp_f;

vp_info.vp(:,1)=vp_f(:,2);
vp_info.vp(:,2)=vp_f(:,1);
vp_info.vp(:,3)=vp_f(:,3);

vp_info.pp=pp;
vp_info.focal=focal/pixelSize;
vp_info.pixelSize=pixelSize;


end