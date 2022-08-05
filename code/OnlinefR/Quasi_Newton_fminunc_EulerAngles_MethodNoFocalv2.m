function [final_vp, final_likelihoods, final_euler_angles,focal] = Quasi_Newton_fminunc_EulerAngles_MethodNoFocalv2(ini_Euler,mixParams,lineData, focal, pp, pixelOffset,ublb,pdfdhtable,pdfdvtable)


options = optimoptions(@fmincon,'Display','off','Algorithm','interior-point');


% multiplier=1;
% ini_Euler=[ini_Euler];
lb=ublb(1,:);
ub=ublb(2,:);

fun = @(x)eval_Quasi_Newton_fminunc_Euler_MethodNoFocalv2(x, mixParams, focal, lineData, pp, pixelOffset,pdfdhtable,pdfdvtable);

%maximize likelihood of model
[final_euler_anglesOpt, final_likelihoods] = fmincon(fun, ini_Euler,[],[],[],[],lb,ub,[],options);

final_likelihoods = -final_likelihoods;
final_euler_angles=final_euler_anglesOpt(1:3);
final_vp=eul2rotm(final_euler_angles,'XYZ');

end