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
function coordFrames = compute_Equal_Spaced_CoordFrames_init_hor_roll_and_ver2(vp, hor_range, ver_range,roll_range)


ver_length = length(ver_range);
roll_length=length(roll_range);
num_initial_sols=length(hor_range);

coordFrames = zeros(3*ver_length,3,num_initial_sols,roll_length);

%get the coordinate frames based on the rotation angle
for j = 1:ver_length
    rot_of_ver_about_hor = deg2rad(ver_range(j));
    basis_vec = vectorRotationAboutAxis(rot_of_ver_about_hor, vp(:,1),[vp(:,2), vp(:,3)]);
    basis_vp = [vp(:,1), basis_vec(:,1), basis_vec(:,2)];
    counter=0;
    for i = 1:num_initial_sols
        rot_horizontal_vectors = vectorRotationAboutAxis(deg2rad(hor_range(i)),basis_vp(:,2),[basis_vp(:,1), basis_vp(:,3)]);
        pos = (j-1)*3 + 1;
        rotm=[rot_horizontal_vectors(:,1), basis_vp(:,2), rot_horizontal_vectors(:,2)];
        for k = 1:length(roll_range)
            eul=rotm2eul(rotm,'XYZ');
            %vertical horizontal roll
            eul(3)=deg2rad(roll_range(k));
            coordFrames(pos:pos+2,:,counter+1,k) =eul2rotm(eul,'XYZ');
        end
        counter=counter+1;
    end
end
end
