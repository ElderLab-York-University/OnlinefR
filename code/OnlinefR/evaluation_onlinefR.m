clear
clc
close all

addpath(genpath('MCMLSD/'));
addpath(genpath('OnlinefR/'));
addpath(genpath('lsd-1.5/'));
img = imread('P1040823.jpg');

addpath(genpath('/Users/yimingqian/Dropbox/PhD/MCMLSD/YorkUrbanDB'));

load('ECCV_TrainingAndTestImageNumbers.mat')
load('Manhattan_Image_DB_Names.mat')

dsetPath = fullfile('/Users/yimingqian/Dropbox/PhD/MCMLSD/YorkUrbanDB');
% imds = imageDatastore(dsetPath,'IncludeSubfolders',true);

type = 'test';
if strcmp(type, 'train')
    setIndexes = trainingSetIndex;
else
    setIndexes = testSetIndex;
end

Nsetsamples = size(setIndexes,1);


idxTest = 1;
idxImgs = 0;
listing = dir(dsetPath);
ttlData = size(listing,1);
alpha = 0; %Threshold for line probabilities.
% setDebug(0);
out = [];

frame_error=[];
totalTime=zeros(length(setIndexes),6);
focalEst=zeros(length(setIndexes),1);
vpData=struct();


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%initialize the parameter for a fixed image size, you on
mode='regular'; %mode can be 'regular' or 'fast'
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%line segment detection for image
parametersMCMLSD = initialization_MCMLSD(img,mode);
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
parameters = initialization_onlinefR(img,mode);
%parameters.pp=[320,240]; %if you have principle length you can input here

% parameters.pp=[632.2864,  372.7488];
% parameters.focal=636.7740; %if you have focal lenth, you can input here
%use detected line segment to estimate focal length and vanishing points
angular_error=zeros(length(setIndexes),3);
record=0;
for i=1:length(setIndexes)
    filename=Manhattan_Image_DB_Names{setIndexes(i)}(1:end-1)
    img=imread([dsetPath '/' filename '/' filename '.jpg']);
    linesSegments=lineSegmentDet(img,parametersMCMLSD);
    [segmentAssociation,vp_info,rotation,runTime]=onlinefR(linesSegments,parameters);
    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    load([filename 'GroundTruthVP_Orthogonal_CamParams.mat']);
    vp_f=vp_info.vp;
    frame_error_ke = frameErrorBetweenTwo_Orthogonal_RH_coordinateFrames(vp_orthogonal,vp_f);
    disp(frame_error_ke)
    frame_error=[frame_error;frame_error_ke];
    record=record+sum(runTime);
%     [angular_error_ke,rotatedvp] = frameErrorBetweenTwo_Orthogonal_RH_coordinateFramesAngles(vp_orthogonal,vp_f);
%     angular_error(i,:)=angular_error_ke;
end



