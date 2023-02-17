function model_likelihood = eval_Quasi_Newton_fminunc_Euler_Method_focal( eulerOPT,mixParams, focal,lineData,pp,pdfdhtable,pdfdvtable)


euler=eulerOPT(1:3);
current_MW_frame=eul2rotm(euler,'XYZ');
model_likelihood = evaluateVPModelLikelihood_CostMethod(mixParams,lineData, current_MW_frame,focal, pp,pdfdhtable,pdfdvtable);  

%we are trying to maximize
model_likelihood = -model_likelihood;