
function linesSeg=lineSegmentDet(img,parameters)
[m,n,~]=size(img);
if strcmp(parameters.mode,'fast')
    %lsd line segment detector
    linesRecoveredP=lsd(double(rgb2gray(img)));
    linesSeg.linesSeg=linesRecoveredP;
else
    %%MCMLSD Line segment detection took form https://www.elderlab.yorku.ca/mcmlsd/
    [linesRecoveredP, fullLines] =lineSegmentation_HighRes(img,parameters);
    linesSeg.linesSeg=linesRecoveredP;
    linesSeg.lines=fullLines;
end

linesRecoveredP=linesSeg.linesSeg;
%remove the line segments shorter than 1 pixel
lineLength=sqrt(sum((linesRecoveredP(:,1:2)-linesRecoveredP(:,3:4)).^2,2));
threshold=parameters.threshold;
linesSeg.linesSeg=linesRecoveredP(lineLength>threshold,:);

% set a 1% margin around the image 
top=m*0.01;
bottom=m-top;
left=n*0.01;
right=n-left;
verticallines=((linesSeg.linesSeg(:,3)>right)&linesSeg.linesSeg(:,1)>right)|((linesSeg.linesSeg(:,3)<left)&linesSeg.linesSeg(:,1)<left);
horizontallines=((linesSeg.linesSeg(:,4)>bottom)&linesSeg.linesSeg(:,2)>bottom)|((linesSeg.linesSeg(:,4)<top)&linesSeg.linesSeg(:,2)<top);
removelines=verticallines|horizontallines;
linesSeg.linesSeg(removelines,:)=[];
end