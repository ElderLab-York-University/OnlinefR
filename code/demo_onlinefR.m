clear
clc
close all

addpath(genpath('MCMLSD/'));
addpath(genpath('OnlinefR/'));
addpath(genpath('lsd-1.5/'));
img = imread('lobby0001.png');


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%initialize the parameter for a fixed image size, you on
mode='regular'; %mode can be 'regular' or 'fast'
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%line segment detection for image
parametersMCMLSD = initialization_MCMLSD(img,mode);
linesSegments=lineSegmentDet(img,parametersMCMLSD);
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
parameters = initialization_onlinefR(img,mode);
%parameters.pp=[320,240]; %if you have principle length you can input here

parameters.pp=[632.2864,  372.7488];
parameters.focal=636.7740; %if you have focal lenth, you can input here
%use detected line segment to estimate focal length and vanishing points
[segmentAssociation,vp_info,rotation,runTime]=onlinefR(linesSegments,parameters);
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
fig = figure;
imshow(img);
hold on;
for i = 1:length(linesSegments.linesSeg)
    p1 = linesSegments.linesSeg(i,1:2);
    p2 = linesSegments.linesSeg(i,3:4);
    if segmentAssociation(i)==1
        plot([p1(1), p2(1)], [p1(2) p2(2)], 'r','LineWidth',3); %Z
    end
    if segmentAssociation(i)==2
        plot([p1(1), p2(1)], [p1(2) p2(2)], 'g','LineWidth',3); %X
    end
    if segmentAssociation(i)==3
        plot([p1(1), p2(1)], [p1(2) p2(2)], 'b','LineWidth',3); %Y
    end
    if segmentAssociation(i)==4
        plot([p1(1), p2(1)], [p1(2) p2(2)], 'y','LineWidth',3); %Y
    end
end
hold off;

disp(['roll angle is ' num2str(rotation.roll) ' degree']);
disp(['tilt angle is ' num2str(rotation.tilt) ' degree']);


