# A Reliable Online Method for Joint Estimation of Focal Length and Camera Rotation

Linear perspective cues deriving from regularities of the built environment can be used to recalibrate both intrinsic and extrinsic camera parameters online, but these estimates can be unreliable due to irregularities in the scene, uncertainties in line segment estimation and background clutter. Here we address this challenge through four initiatives. First, we use the PanoContext panoramic image dataset to curate a novel and realistic dataset of planar projections over a broad range of scenes, focal lengths and camera poses. Second, we use this novel dataset and the YorkUrbanDB to systematically evaluate the linear perspective deviation measures frequently found in the literature and show that the choice of deviation measure and likelihood model has a huge impact on reliability. Third, we use these findings to create a novel system for online camera calibration we call fR, and show that it outperforms the prior state of the art, substantially reducing error in estimated camera rotation and focal length. Our fourth contribution is a novel and efficient approach to estimating uncertainty that can dramat- ically improve online reliability for performance-critical applications by strategically selecting which frames to use for recalibration.

<img width="1069" alt="Screen Shot 2022-07-19 at 14 04 07" src="https://user-images.githubusercontent.com/21068712/179676987-f041d34d-37b5-427d-835d-e01f9c66d1ba.png">

Our paper was accepted in ECCV 2022. The paper can be found here http://arxiv.org/abs/2207.12934

The PanoContext-fR dataset can be downloaded from here.
https://yuoffice.sharepoint.com/:u:/r/sites/TheLab/Shared%20Documents/General/panoramic.zip?csf=1&web=1&e=P5YEF3

Our code is based on Matlab, it consists of three parts
1. fR algorithm
2. MCMLSD algorithm
3. LSD algorithm

The MCMLSD algorithm is obtained from paper:
Almazan, E. J., Tal, R., Qian, Y., & Elder, J. H. (2017). Mcmlsd: A dynamic programming approach to line segment detection. In Proceedings of the IEEE Conference on Computer Vision and Pattern Recognition (pp. 2031-2039).
The MCMLSD algorithm requires compiling its c code into MEX binary file. The instruction for compilation is available in the MCMLSD folder Readme.txt.

The LSD algorithm is from obtained from paper:
Von Gioi, R. G., Jakubowicz, J., Morel, J. M., & Randall, G. (2012). LSD: A line segment detector. Image Processing On Line, 2, 35-55.
The LSD algorithm also require compiling its c code into MEX binary file. The instruction is available in its folder in README.txt.

