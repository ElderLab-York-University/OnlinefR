function parameters=initialization_MCMLSD(img,mode)
parameters=struct();
parameters.mode=mode;
parameters.threshold=1;

if strcmp(mode,'fast')
   parameters.maxIter=10;
   parameters.kernels=[];
   parameters.kernels_flip=[];
   parameters.kernel_params=[];
else
    [kernels, kernels_flip, kernel_params] =kernelInitialization(img);
    parameters.kernels=kernels;
    parameters.kernels_flip=kernels_flip;
    parameters.kernel_params=kernel_params;
end
end