%#####################################################
%
% coordFrames = compute_Equal_Spaced_CoordFrames_init_hor_and_ver(vp, num_initial_sols, var_range)
%
% INPUT
% num_initial_sols - [1] scalar which represents the number of equal spaced
%   coordinate frames between 0 and pi/2.
%
% OUTPUT
% coordFrames - [3,3,n] where n is the number of coordinate frames to be
%   returned (= num_initial_sols).
%
% OBJECTIVE
% The purpose of this function is to rotate the identity coordinate frame
% around the vertical axis by equal amounts depending on the number of
% solutions required.
%
%#####################################################
function coordFrames = compute_Equal_Spaced_CoordFrames_init_hor_roll_and_ver(vp, hor_range, ver_range,roll_range)


ver_length = length(ver_range);
roll_length=length(roll_range);
num_initial_sols=length(hor_range);
%get all of the starting positions
% if num_initial_sols < 1
%     fprintf('Invalid value for parameter: num_initial_sols - exiting()...\n');
%     coordFrames = [];
%     return
% else
% coordFrames = zeros(3*ver_length,3,num_initial_sols);
coordFrames=zeros(ver_length,num_initial_sols,roll_length,3,3);
% coordFrames = zeros(3*ver_length,3,num_initial_sols,roll_length);
%get the coordinate frames based on the rotation angle
for j = 1:ver_length
    ver = deg2rad(ver_range(j));
    for i = 1:num_initial_sols
        hor=deg2rad(hor_range(i));
%         coordFrames(pos:pos+2,:,counter+1) =rotm;
        for k = 1:length(roll_range)
            %vertical horizontal roll
            roll=deg2rad(roll_range(k));
            eul=[ver,hor,roll];
            coordFrames(j,i,k,:,:) =eul2rotm(eul,'XYZ');
        end
        
    end
end
end
