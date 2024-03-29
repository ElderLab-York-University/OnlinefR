function [final_vp, final_likelihoods, final_euler_angles,focal] = Quasi_Newton_fminunc_EulerAngles_Method(ini_Euler,mixParams,lineData, focal, pp,ublb,pdfdhtable,pdfdvtable,options)
multiplier=ublb(2,4);
ini_Euler=[ini_Euler,focal/multiplier];
lb=ublb(1,:);
ub=ublb(2,:);

lb(1,4)=focal/multiplier;
ub(1,4)=focal/multiplier;


fun = @(x)eval_Quasi_Newton_fminunc_Euler_Method(x, mixParams, multiplier, lineData, pp,pdfdhtable,pdfdvtable); 

%maximize likelihood of model
[final_euler_anglesOpt, final_likelihoods] = fmincon(fun, ini_Euler,[],[],[],[],lb,ub,[],options); 

final_likelihoods = -final_likelihoods;
final_euler_angles=final_euler_anglesOpt(1:3);
focal=final_euler_anglesOpt(4)*multiplier;
final_vp=eul2rotm(final_euler_angles,'XYZ');