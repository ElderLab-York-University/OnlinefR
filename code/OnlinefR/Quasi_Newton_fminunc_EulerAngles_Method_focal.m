function [final_vp, final_likelihoods, final_euler_angles,focal] = Quasi_Newton_fminunc_EulerAngles_Method_focal(ini_Euler,mixParams,lineData, focal, pp,ublb,pdfdhtable,pdfdvtable,options)

lb=ublb(1,:);
ub=ublb(2,:);



fun = @(x)eval_Quasi_Newton_fminunc_Euler_Method_focal(x, mixParams, focal, lineData, pp,pdfdhtable,pdfdvtable); 

%maximize likelihood of model
[final_euler_anglesOpt, final_likelihoods] = fmincon(fun, ini_Euler,[],[],[],[],lb,ub,[],options); 

final_likelihoods = -final_likelihoods;
final_euler_angles=final_euler_anglesOpt(1:3);
final_vp=eul2rotm(final_euler_angles,'XYZ');