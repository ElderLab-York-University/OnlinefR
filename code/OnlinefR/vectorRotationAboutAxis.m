%#####################################################
%
% rot_vectors = vectorRotationAboutAxis(rot_angle, rot_axis, vectors)
%
% INPUT
% rot_angle - [1] angle in RADS representing rotation around axis
% rot_axis - [3,1] vector representing the axis of rotation
% vectors - [3,n] matrix where 'n' vectors are to be rotated around axis
%
% OUTPUT
% r_prime - [3,n] matrix with the rotated vectors
%
% OBJECTIVE
% The purpose of this function is to find the coordinates of a set of
% vector rotated about an axis.  Based on Mathworld resource:
% http://mathworld.wolfram.com/RotationFormula.html.  This to
% correspond to a CLOCKWISE rotation
%
%#####################################################
function rot_vectors = vectorRotationAboutAxis(rot_angle, rot_axis, vectors)


ON = vectors.*cos(rot_angle);
NV = (repmat(rot_axis,1,size(vectors,2)).*repmat((rot_axis'*vectors),3,1)).*(1-cos(rot_angle));
VQ = cross(vectors,repmat(rot_axis,1,size(vectors,2)),1).*sin(rot_angle);

rot_vectors = ON + NV + VQ;

end
