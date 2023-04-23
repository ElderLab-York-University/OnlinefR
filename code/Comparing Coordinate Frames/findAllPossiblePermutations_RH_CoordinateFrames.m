%#####################################################
%
% all_3_RH_coord_frame = findAllPossiblePermutations_RH_CoordinateFrames(coord_frame)
%
% INPUT
% coord_frame - [3,3] matrix where each COLUMN represents a vector in the
%   coordinate frame.  Coordinate Frame SHOULD be orthogonal!
%
% OUTPUT
% all_3_RH_coord_frame - [3,3,3] each RH coordinate frame is returned 
%
% OBJECTIVE
% The purpose of this function is to find the possible permutations of a
% coordinate frame which follow the RIGHT HAND RULE.
% 
%#####################################################
function all_3_RH_coord_frame = findAllPossiblePermutations_RH_CoordinateFrames(coord_frame)

%6 possible permutations of a coordinate frame - verify which 3 follow the
%Right Hand Rule
all_3_RH_coord_frame = [];
all_combs = perms(1:3);

num_RH_found = 0;
cross_index = 1;

while cross_index < 7

    %find cross product of one of the permutations
    cross_results = cross(coord_frame(:,all_combs(cross_index,1)), coord_frame(:,all_combs(cross_index,2)));
    
    %verify if permutation is a RHS
    if sign(coord_frame(:,all_combs(cross_index,3))'*cross_results) == 0
        fprintf('ERROR with findAllPossibleRHCoordinateFrames() - exiting...\n');
        all_3_RH_coord_frame = [];
        break
    end
    
    if sign(coord_frame(:,all_combs(cross_index,3))'*cross_results) == 1 
        num_RH_found = num_RH_found + 1;
        all_3_RH_coord_frame(:,:,num_RH_found) = [coord_frame(:,all_combs(cross_index,1)), coord_frame(:,all_combs(cross_index,2)), coord_frame(:,all_combs(cross_index,3))];
    end
    
    %do we have all 3 permutations?
    if num_RH_found == 3
        break;
    end
    
    %increment loop
    cross_index = cross_index + 1;
    
end

