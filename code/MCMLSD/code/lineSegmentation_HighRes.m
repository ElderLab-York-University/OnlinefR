function [lines, fullLines] =lineSegmentation_HighRes(img,parameters)

%use 640x480 image as a reference. the diagonal size of this image is 800
%if image size 640x480 scale factor = 1
%if image size 1280x960 scale factor = 2 ... etc.
%the lines variable contains the detected line segmentations it arranged as
%[x1 y1 x2 y2 probability]
%The fullLines are the detected lines. It is arranged as [rho theta probability]

kernels=parameters.kernels;
kernels_flip=parameters.kernels_flip;
kernel_params=parameters.kernel_params;
% pp=parameters.pp;

sig_bound = 3; %threshold for the line detection
r_res = 0.2; %the theshold for the rho
th_res = 0.002; %the threshold for theta
[m,n,~]=size(img);
scale_factor = sqrt(m^2+n^2)/800; %800 is the diagnal length of 640x480 image
cImg=[n/2,m/2];

%the kernel of the algorithm is calibrated on 640x480 image
%rescale the centre of image
cImg(1)=cImg(1)*n/640;
cImg(2)=cImg(2)*m/480;
[lines, fullLines] = run_lineSegmentAlgorithm(kernels, kernels_flip, kernel_params, sig_bound, r_res, th_res, img, scale_factor,cImg);
end