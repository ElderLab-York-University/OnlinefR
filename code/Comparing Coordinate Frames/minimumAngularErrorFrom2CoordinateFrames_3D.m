%#####################################################
%
% [min_angles, col_index] = minimumAngularErrorFrom2CoordinateFrames_3D(coord_frame1, coord_frame2)
%
% INPUT
% coord_frame1 - [3,3] matrix representing a coordinate frame.  THIS
%   COORDINATE FRAME MUST BE NORMALIZED.
% coord_frame2 - [3,3] matrix representing a coordinate frame.  THIS
%   COORDINATE FRAME MUST BE NORMALIZED.
%
% OUTPUT
% min_angles - [3,1] vector with the three angles representing the angular
%   difference of the vectors in the coordinate frames.
% col_index - [3,1] vector with the column index where each vector from
% 	coord_frame1 are associated to coord_frame2 to find the minimum angle.
%
% OBJECTIVE
% The purpose of this function is to find the minimum angular error (in
% degrees) associated to each vectors in both coordinate frames.  What
% makes this problem so difficult is that we do NOT know the association
% between vectors, so we must find the smallest angular error based on the
% total angular error.  No quaternion representations are used.
%
%#####################################################
function [min_angles, col_index] = minimumAngularErrorFrom2CoordinateFrames_3D(coord_frame1, coord_frame2)

%assume that both coordinate frames are normalized
ang_diff = acosd(coord_frame1'*coord_frame2);
ang_diff(ang_diff > 90) = 180 - ang_diff(ang_diff > 90);

[min_angles, col_index] = min(ang_diff, [], 2);

%if by any chance the coordinate frames are far apart, it may not choose
%the unique solution.  To correct this, we choose the solution which
%satisfies the smallest angular difference for all 3 vectors.
if ~isempty(setdiff([1;2;3], col_index))
    fprintf('Not Unique, choosing vectors from the sum of the angular difference\n');
    all_valid_combs = perms([1;2;3]);
    num_combs = size(all_valid_combs,1);
    row_index = [ones(num_combs,1), 1+ones(num_combs,1), 2+ones(num_combs,1)];
    all_valid_combs_ind = sub2ind([3,3], row_index(:), all_valid_combs(:));
    all_valid_combs_matrix = [all_valid_combs_ind(1:6), all_valid_combs_ind(7:12), all_valid_combs_ind(13:18)];
    all_valid_sums = sum(ang_diff(all_valid_combs_matrix),2);
    
    [min_sum, min_sum_ind] = min(all_valid_sums);
    min_angles = ang_diff(all_valid_combs_matrix(min_sum_ind,:))';
    
    [temp,col_index] = ind2sub([3,3], all_valid_combs_matrix(min_sum_ind,:)');
end

%this step is not necessary but it orders the vectors so that the vector
%that you are comparing always has same order - first vector in
%coord_frame1 will be displayed even though it can swaped with the third
%vector.  This resulted because of the repeated measures t-test for the
%angular deviation
if col_index(1) == 3
    temp = min_angles(1);
    min_angles(1) = min_angles(3);
    min_angles(3) = temp;
end
