function [likelihood] = evaluateVPModelLikelihood_CostMethod4v2(mixParams,lines, vp,focal,pp,pdfdhtable,pdfdvtable)

prob_v = computeMeanErrorLineVPv2(vp(:,1),lines,focal,pp,pdfdvtable);
prob_h1 = computeMeanErrorLineVPv2(vp(:,2),lines,focal,pp,pdfdhtable);
prob_h2 = computeMeanErrorLineVPv2(vp(:,3),lines,focal,pp,pdfdhtable);

linedist=lines.length;
alpha_b = 1 - (mixParams(1) + 2*mixParams(2));
prob_b = alpha_b*2/pi;
prob = prob_v+ prob_h1 + prob_h2 + prob_b;
likelihood = sum(log(prob).*linedist);
end