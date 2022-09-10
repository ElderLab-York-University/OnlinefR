
function theta=computeMeanErrorLineVP(vp,linesP,focal,pp,pdftable)

ytab=pdftable(:,1);
pytab=pdftable(:,2);
points2D=projectworld2Image(vp',focal,pp);

lineProperty=linesP.middle;
v2=linesP.v2;
v1=lineProperty(:,1:2)-points2D;
vpdel=v1./sqrt(sum(v1.^2,2));
y = abs(acos(abs(sum(v2.*vpdel,2))));
theta = interp1(ytab,pytab,y,'linear','extrap');
end