%#####################################################
%
% vp_permutations = vanishingPointCoordinateFramePermutations(vp_frame)
%
% INPUT
% vp_frame - [3,3] matrix of NORMALIZED column vectors representing a
%   coordinate frame in the Gaussian Sphere.
%
% OUTPUT
% vp_permutations - [3,3,8] matrix with each permutation in the 3rd
%   dimension.
%
% OBJECTIVE
% The purpose of this function is to return the 8 possible permutations
% that you have from the Vanishing Point solution in the Gaussian Sphere.
% Each vector can be reversed and there are 3 vectors which makes 8
% possibilities (2*2*2).
% 
%#####################################################
function vp_permutations = vanishingPointCoordinateFramePermutations(vp_frame)

vp_permutations = zeros(3,3,8);

vp_permutations(:,:,1) = vp_frame;
vp_permutations(:,:,2) = [-vp_frame(:,1), vp_frame(:,2:3)];
vp_permutations(:,:,3) = [vp_frame(:,1), -vp_frame(:,2), vp_frame(:,3)];
vp_permutations(:,:,4) = [vp_frame(:,1:2), -vp_frame(:,3)];
vp_permutations(:,:,5) = [-vp_frame(:,1:2), vp_frame(:,3)];
vp_permutations(:,:,6) = [-vp_frame(:,1), vp_frame(:,2), -vp_frame(:,3)];
vp_permutations(:,:,7) = [vp_frame(:,1), -vp_frame(:,2:3)];
vp_permutations(:,:,8) = -vp_frame;