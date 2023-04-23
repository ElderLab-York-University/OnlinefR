%#####################################################
%
% euler_angles = findEulerAnglesOf_3D_Frame(basis, final_basis)
%
% INPUT
% frame1 - [3,3] matrix of NORMALIZED column vectors
% frame2 - [3,3] matrix of NORMALIZED column vectors
%
% OUTPUT
% euler_angles - [1,3] vector with the three Euler angles.
% resnorm - [1] scalar output from MATLAB non linear solver.
%
% OBJECTIVE
% The purpose of this function is find the Euler angles that explain the
% rotation between 2 coordinate frames.  Currently, only one method is
% implemented where the ADJUSTED MANHATTAN WORLD rotation matrix that is
% used for my Master's Thesis is implemented.
% 
%#####################################################
function [euler_angles, resnorm] = findEulerAnglesBetween_CoordinateFrames(frame1, frame2, method)

%Using the solution from http://mathworld.wolfram.com/EulerAngles.html to
%get solution

%X' = R*X -> (X'X^t)*inv(X'X^t) = R
left_side = frame2*frame1';
inv_right_side = inv(frame1*frame1');
R = left_side*inv_right_side;

%define the f vector
f = [R(1,:)';R(2,:)';R(3,:)'];

%use nonlinear least squares method
options = optimset('lsqnonlin');
options = optimset(options, 'Display','off','TolFun',1e-11,'TolX', 1e-11);

euler_initial = [0,0,0];
if strcmp(method,'MW')
% %     % [euler_angles,resnorm,residual,exitflag] = lsqnonlin(@myTest,euler_initial,[-4*pi;-4*pi;-4*pi], [4*pi;4*pi;4*pi],options,f);
% %     [euler_angles,resnorm,residual,exitflag] = lsqnonlin(@myNonLinear_ManhattanWorldEulerAngleSolver,euler_initial,[-4*pi;-4*pi;-4*pi], [4*pi;4*pi;4*pi],options,f);
elseif strcmp(method, 'MW_ADJ')
    [euler_angles, resnorm, residual, exitflag] = lsqnonlin(@myNonLinear_EulerAngleSolver_ManhattanWorldAdjusted, euler_initial, [-4*pi;-4*pi;-4*pi], [4*pi;4*pi;4*pi],options,f);
else
    fprintf('findEulerAnglesOf_3D_Frame(): Not a valid option for input parameter method - exiting...\n');
    euler_angles = [];
    return
end


if exitflag < 0
    fprintf('Nonlinear search of Euler rotation angles did not terminate properly: %d\n',exitflag);
end
