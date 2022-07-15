clear
clc
close all

addpath(genpath('MCMLSD/'));
addpath(genpath('vp_estimation/'));
addpath(genpath('lsd-1.5/'));
img = imread('samples.jpg');


%compute the kernel for the image size
%you only need to compute the kernal once for one an image size
[m,n,~]=size(img);
pp=[n/2,m/2]; %principle point
focal=0; % if no focal length available, input 0 in the focal, the unit here is in pixels

sp=8;
gd=4;
max_ver=30;
max_roll=15;
max_hor=45;
angle_min_max=[40,80];
setGlobalx(10);
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%initialization
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
ytabv = icdf(pdfdv,1-eps)*[0:0.001:pi/2]; %sample angle
prob_v = mixParams(1)*pdf(pdfdv,ytabv);
pdfdvtable=[ytabv',prob_v'];
ytabh = icdf(pdfdh,1-eps)*[0:0.001:pi/2]; %sample angle
prob_h1 = mixParams(2)*pdf(pdfdh,ytabh);
pdfdhtable=[ytabh',prob_h1'];
test_inits = compute_Equal_Spaced_CoordFrames_init_hor_roll_and_ver4(eye(3), hor_range, ver_range,roll_range);
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%LSD line segment detector
linesRecoveredP=lsd(double(rgb2gray(img)));
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
lineLength=sqrt(sum((linesRecoveredP(:,1:2)-linesRecoveredP(:,3:4)).^2,2));
threshold=1;
lineIndex=find(lineLength>threshold);
linesRecoveredP=linesRecoveredP(lineIndex,:);
lineIndex=1:length(lineIndex);

[segmentAssociation,vp_info,euler_angles,runTime]=manhattanFrameEstimationMethod6(linesRecoveredP,lineIndex,pp,0, test_inits,focal_range,gd,ublb,pdfdhtable,pdfdvtable);

linesRecoveredN=[linesRecoveredP(:,:),segmentAssociation];
linesRecovered = sortrows(linesRecoveredN, -5);

fig = figure;
imshow(img);
hold on;
for i = 1:length(linesRecovered)
    p1 = linesRecovered(i,1:2);
    p2 = linesRecovered(i,3:4);
    if linesRecovered(i,6)==1
        plot([p1(1), p2(1)], [p1(2) p2(2)], 'r','LineWidth',3); %Z
    end
    if linesRecovered(i,6)==2
        plot([p1(1), p2(1)], [p1(2) p2(2)], 'g','LineWidth',3); %X
    end
    if linesRecovered(i,6)==3
        plot([p1(1), p2(1)], [p1(2) p2(2)], 'b','LineWidth',3); %Y
    end
    if linesRecovered(i,6)==4
        plot([p1(1), p2(1)], [p1(2) p2(2)], 'y','LineWidth',3); %Y
    end
end
hold off;



