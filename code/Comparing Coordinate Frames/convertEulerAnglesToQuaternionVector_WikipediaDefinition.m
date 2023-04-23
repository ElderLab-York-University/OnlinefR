%#####################################################
%
% 
%
% INPUT
% eulerAngles - [1,3] vector representing the three Euler angle in RADIANS.
%   [PHI, THETA, PSI]
%
% OUTPUT
% quaternion - [4,1] vector representing the quaternion.
%
% OBJECTIVE
% The purpose of this function is to convert the Euler angles from a
% rotation and convert them to the appropriate quaternion vector.  We are
% using the quaternion conversion formula from Wikipedia site:
% "http://en.wikipedia.org/wiki/Conversion_between_quaternions_and_Euler_an
% gles".  This representation should conform to the euler angles which are
% used in the Manhattan World paper.
% 
%#####################################################
function quaternion = convertEulerAnglesToQuaternionVector_WikipediaDefinition(eulerAngles)

phi = eulerAngles(1);
theta = eulerAngles(2);
psi = eulerAngles(3);

quaternion = zeros(4,1);

quaternion(1) = cos(phi/2)*cos(theta/2)*cos(psi/2) + sin(phi/2)*sin(theta/2)*sin(psi/2);
quaternion(2) = sin(phi/2)*cos(theta/2)*cos(psi/2) - cos(phi/2)*sin(theta/2)*sin(psi/2);
quaternion(3) = cos(phi/2)*sin(theta/2)*cos(psi/2) + sin(phi/2)*cos(theta/2)*sin(psi/2);
quaternion(4) = cos(phi/2)*cos(theta/2)*sin(psi/2) - sin(phi/2)*sin(theta/2)*cos(psi/2);
