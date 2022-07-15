@echo off
set MATLAB=D:\Programs\MATLAB\R2018a
set MATLAB_ARCH=win64
set MATLAB_BIN="D:\Programs\MATLAB\R2018a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=hmmParameters
set MEX_NAME=hmmParameters
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for hmmParameters > hmmParameters_mex.mki
echo COMPILER=%COMPILER%>> hmmParameters_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> hmmParameters_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> hmmParameters_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> hmmParameters_mex.mki
echo LINKER=%LINKER%>> hmmParameters_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> hmmParameters_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> hmmParameters_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> hmmParameters_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> hmmParameters_mex.mki
echo OMPFLAGS= >> hmmParameters_mex.mki
echo OMPLINKFLAGS= >> hmmParameters_mex.mki
echo EMC_COMPILER=msvc150>> hmmParameters_mex.mki
echo EMC_CONFIG=optim>> hmmParameters_mex.mki
"D:\Programs\MATLAB\R2018a\bin\win64\gmake" -j 1 -B -f hmmParameters_mex.mk
