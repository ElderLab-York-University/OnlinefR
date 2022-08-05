
function linesSeg=lineSegmentDet(img,parameters)

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
end