function [likelihood,focal] = evaluateVPModelLikelihood_Method(lines, mixParams,vp,focal,pp,pdfdhtable,pdfdvtable)

[likelihood]=evaluateVPModelLikelihood_CostMethod(mixParams,lines, vp,focal,pp,pdfdhtable,pdfdvtable);
end