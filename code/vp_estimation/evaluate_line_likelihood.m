function [val,ind] = evaluate_line_likelihood(lines, vp, pp, focal, pixelSize,datapdf)

% linedist=sqrt(sum((lines(:,1:2)-lines(:,3:4)).^2,2));
mixParams=[0.445175656615196,0.262438160101957,0.00980884476515174,0.0137715966528598,0.0299480231808897];

theta_1 = computeMeanErrorLineVP(vp(:,1),lines,focal,pp,pixelSize);
theta_2 = computeMeanErrorLineVP(vp(:,2),lines,focal,pp,pixelSize);
theta_3 = computeMeanErrorLineVP(vp(:,3),lines,focal,pp,pixelSize);

pdfdv=datapdf.pdfdv;
pdfdh=datapdf.pdfdh;
alpha_b = 1 - (mixParams(1) + 2*mixParams(2));

prob_vpx = mixParams(1)*pdf(pdfdv,theta_1);

prob_vpy = mixParams(2)*pdf(pdfdh,theta_2);

prob_vpz = mixParams(2)*pdf(pdfdh,theta_3);

prob_b = alpha_b*2/pi;

denom = (prob_vpx+ prob_vpy + prob_vpz + prob_b);
lineProbVPX = prob_vpx./denom;
lineProbVPY = prob_vpy./denom;
lineProbVPZ = prob_vpz./denom;
lineProbB = prob_b./denom;
prob_vec = [lineProbVPY, lineProbVPX, lineProbVPZ, lineProbB];

[val,ind]=max(prob_vec,[],2);
% associations = ind;



end