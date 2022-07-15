function [associations] = evaluate_line_associations2(lineData, vp, pp, focal,mixParams,pdfdhtable,pdfdvtable)

lineDataAll=struct();
lineDataAll.middle=(lineData(:,1:2)+lineData(:,3:4))/2;
lineDataAll.length=sqrt(sum((lineData(:,1:2)-lineData(:,3:4)).^2,2));
v2=lineData(:,1:2)-lineData(:,3:4);
v2=v2./sqrt(sum(v2.^2,2));
lineDataAll.v2=v2;


prob_vpx = computeMeanErrorLineVPv2(vp(:,1),lineDataAll,focal,pp,pdfdvtable);
prob_vpy = computeMeanErrorLineVPv2(vp(:,2),lineDataAll,focal,pp,pdfdhtable);
prob_vpz = computeMeanErrorLineVPv2(vp(:,3),lineDataAll,focal,pp,pdfdhtable);


alpha_b = 1 - (mixParams(1) + 2*mixParams(2));

prob_b = alpha_b*2/pi;

denom = (prob_vpx + prob_vpy + prob_vpz + prob_b);
lineProbVPX = prob_vpx./denom;
lineProbVPY = prob_vpy./denom;
lineProbVPZ = prob_vpz./denom;
lineProbB = prob_b./denom;
prob_vec = [lineProbVPY, lineProbVPX, lineProbVPZ, lineProbB];

[val,ind]=max(prob_vec,[],2);
associations = ind;



end