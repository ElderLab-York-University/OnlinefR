
function theta=computeMeanErrorLineVP(vp,linesP,focal,pp,pixelSize)

points2D=projectworld2Image(vp',focal,pp,pixelSize);
lineProperty=(linesP(:,1:2)+linesP(:,3:4))/2;

v1=lineProperty(:,1:2)-points2D;
v2=linesP(:,1:2)-linesP(:,3:4);
anglev = abs(wrapToPi(vectorAngle(v1, v2)));
ind= anglev>pi/2;

anglev(ind)=pi-anglev(ind);
theta=anglev;
end