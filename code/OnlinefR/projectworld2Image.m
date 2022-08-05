function points2D=projectworld2Image(point3D,focal,pp)
pointworld=point3D(:,1:3)./repmat(point3D(:,3),1,3).*focal;
points2D=zeros(size(pointworld,1),2);
points2D(:,1)=pointworld(:,1)+pp(1);
points2D(:,2)=-pointworld(:,2)+pp(2);
end