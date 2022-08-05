function [likelihood,focal] = evaluateVPModelLikelihood_Method4v2(lines, mixParams,vp,focal,pp,pdfdhtable,pdfdvtable)

[likelihood]=evaluateVPModelLikelihood_CostMethod4v2(mixParams,lines, vp,focal,pp,pdfdhtable,pdfdvtable);
end