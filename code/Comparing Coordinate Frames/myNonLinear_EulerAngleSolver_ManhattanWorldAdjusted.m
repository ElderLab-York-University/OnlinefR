%#####################################################
%
% F = myNonLinear_EulerAngleSolver_ManhattanWorldAdjusted(x,f)
%
% INPUT
% x - [1,3] - Euler angles representing [Pitch, Roll, Yaw] in Radians.
% f - [9,1] vector representing the values in the rotation matrix.
%
% OUTPUT
% F - [9,1] vector
%
% OBJECTIVE
% The purpose of this function is to be used by the non linear solver from
% matlab and using the function
% find_EulerAnglesBetween_3D_Frames().  This is based on the website:
% http://mathworld.wolfram.com/EulerAngles.html but we are using the
% Rotation matrix which performs the following rotation (active rotation
% instead) where we rotate around the Y axis, then around the X axis then
% around the Z axis.  This is the rotation matrix i am using for my Masters
% thesis.
% 
%#####################################################
function F = myNonLinear_EulerAngleSolver_ManhattanWorldAdjusted(x,f)

phi = x(1); 
theta = x(2); 
psi = x(3); 

F1(1,1) = cos(phi)*cos(psi)+sin(phi)*sin(theta)*sin(psi);
F1(1,2) = -cos(phi)*sin(psi)+sin(phi)*sin(theta)*cos(psi);
F1(1,3) = sin(phi)*cos(theta);
F1(2,1) = cos(theta)*sin(psi);
F1(2,2) = cos(theta)*cos(psi);
F1(2,3) = -sin(theta);
F1(3,1) = -sin(phi)*cos(psi)+cos(phi)*sin(theta)*sin(psi);
F1(3,2) = sin(phi)*sin(psi)+cos(phi)*sin(theta)*cos(psi);
F1(3,3) = cos(phi)*cos(theta);
F1 = F1';

F = f - F1(:);
