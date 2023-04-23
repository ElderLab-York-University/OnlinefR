%#####################################################
%
% frame_error = frameErrorBetweenTwo_Orthogonal_RH_coordinateFrames(frame1, frame2)
%
% INPUT
% frame1 - [3,3] matrix representing a coordinate frame THAT IS NOT IN
%   MANHATTAN WORLD FORM, rather we are using our matrix convention
%   ('MW_ADJ').
% frame2 - [3,3] matrix representing a coordinate frame THAT IS NOT IN
%   MANHATTAN WORLD FORM, rather we are using our matrix convention
%   ('MW_ADJ').
%
% OUTPUT
% frame_error - [1] angular error of rotating one frame onto the next
%   reported in DEGREES.
%
% OBJECTIVE
% The purpose of this function is to find the rotation around an axis which
% describes the rotation from one Right Handed (RH) frame to another RH
% frame.  To do this we must find the quaternion that describes this
% relationship.  A quaternion is a 4 element vector where the first element
% is the amount of rotation and the next three are the rotation axis.
% IMPORTANT NOTE: unfortunately, i do NOT have the appropriate formula's
% that i can use to convert our rotation matrix to a quaternion
% representation.  
%
%#####################################################
function frame_error = frameErrorBetweenTwo_Orthogonal_RH_coordinateFrames(frame1, frame2)


%Suggestion by James to try all exhaustive possibilities when
%trying to find the Euler angles between two coordinate frames.
%Remember that VP frames have a dual solution for each vector.

%Each vector has 2 possibilities, but in the coordinate frame this
%makes for 8 possible combinations.
vp_permutations = vanishingPointCoordinateFramePermutations(frame2);

%mapping a one RH coordinate frame onto another RH frame has three
%possibilities.  Since we are mapping for each permutation we have
%24 possible RH frames
all_vp_permutations = zeros(3,3,24);
for k = 1:size(vp_permutations,3)
    all_vp_permutations(:,:,k*3-2:k*3) = findAllPossiblePermutations_RH_CoordinateFrames(vp_permutations(:,:,k));
end

%We exhaustively calculate all Euler angles between frame1 and the possible
%permutations
rotation_error_possibilities = zeros(24,1);
for k = 1:24
    [euler_angles, resnorm] = findEulerAnglesBetween_CoordinateFrames(all_vp_permutations(:,:,k), frame1, 'MW_ADJ');
    if resnorm > 1
        fprintf('Euler angles between Coordinate frames not resolved properly...frameErrorBetweenTwo_Orthogonal_RH_coordinateFrames()\n');
        rotation_error_possibilities(k) = 100;
    else
        quaternion = convertEulerAnglesToQuaternionVector_WikipediaDefinition(euler_angles);
        rotation_error_possibilities(k) = 2*acosd(quaternion(1));
    end
end

%choose the minimum
frame_error = min(rotation_error_possibilities);
end