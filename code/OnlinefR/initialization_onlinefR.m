function parameters=initialization_onlinefR(img,mode)
parameters=struct();

%compute the kernel for the image size
%you only need to compute the kernal once for one an image size
[m,n,~]=size(img);
pp=[n/2,m/2]; %principle point assumed to be center

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%initialization
sp=8;
gd=4;
max_ver=30;
max_roll=15;
max_hor=45;
angle_min_max=[40,80];

focal_min_max=(pp(1)./tand(angle_min_max/2));
ublb=[deg2rad(-max_ver)*0.99,deg2rad(-max_hor)*0.99,deg2rad(-max_roll)*0.99,focal_min_max(2)*0.99;
    deg2rad(max_ver)*1.01, deg2rad(max_hor)*1.01,deg2rad(max_roll)*1.01,focal_min_max(1)*1.01];
ver_range=-max_ver:max_ver*2/(sp+1):max_ver;
roll_range=-max_roll:max_roll*2/(sp+1):max_roll;
hor_range=-max_hor:max_hor*2/(sp+1):max_hor;
focal_range= focal_min_max(2):(focal_min_max(1)-focal_min_max(2))/(sp+1):focal_min_max(1);
ver_range=ver_range(2:end-1);
roll_range=roll_range(2:end-1);
focal_range=focal_range(2:end-1);
hor_range=hor_range(2:end-1);


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
load('pdfData.mat');
mixParams=[0.445175656615196,0.262438160101957,0.00980884476515174,0.0137715966528598,0.0299480231808897];
ytabv = icdf(pdfdv,1-eps)*[0:0.001:1]; %sample angle
prob_v = mixParams(1)*pdf(pdfdv,ytabv);
pdfdvtable=[ytabv',prob_v'];
ytabh = icdf(pdfdh,1-eps)*[0:0.001:1]; %sample angle
prob_h1 = mixParams(2)*pdf(pdfdh,ytabh);
pdfdhtable=[ytabh',prob_h1'];
test_inits = compute_Equal_Spaced_CoordFrames_init_hor_roll_and_ver(eye(3), hor_range, ver_range,roll_range);

parameters.pp=pp;

parameters.gd=gd;
parameters.pdfdvtable=pdfdvtable;
parameters.pdfdhtable=pdfdhtable;
parameters.test_inits=test_inits;
parameters.ublb=ublb;
parameters.focal_range=focal_range;
parameters.focal=0;
parameters.mode=mode;
parameters.threshold=1;
parameters.maxIter=1000;
if strcmp(mode,'fast')
   parameters.maxIter=10;
   parameters.kernels=[];
   parameters.kernels_flip=[];
   parameters.kernel_params=[];
else
    [kernels, kernels_flip, kernel_params] =kernelInitialization(img);
    parameters.kernels=kernels;
    parameters.kernels_flip=kernels_flip;
    parameters.kernel_params=kernel_params;
end
end