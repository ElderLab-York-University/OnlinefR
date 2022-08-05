clear
clc
close all

addpath(genpath('MCMLSD/'));
addpath(genpath('OnlinefR/'));
addpath(genpath('lsd-1.5/'));
img = imread('samples.jpg');

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%initialize the parameter for a fixed image size, you on
mode='fast'; %mode can be 'regular' or 'fast'
parameters = initialization_onlinefR(img,mode);
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
linesSegments=lineSegmentDet(img,parameters);
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
[segmentAssociation,vp_info,euler_angles,runTime]=onlinefR(linesSegments,parameters);
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



