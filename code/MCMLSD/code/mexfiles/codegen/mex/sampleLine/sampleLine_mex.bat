@echo off
set MATLAB=D:\Programs\MATLAB\R2018a
set MATLAB_ARCH=win64
set MATLAB_BIN="D:\Programs\MATLAB\R2018a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=sampleLine
set MEX_NAME=sampleLine
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for sampleLine > sampleLine_mex.mki
echo COMPILER=%COMPILER%>> sampleLine_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> sampleLine_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> sampleLine_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> sampleLine_mex.mki
echo LINKER=%LINKER%>> sampleLine_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> sampleLine_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> sampleLine_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> sampleLine_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> sampleLine_mex.mki
echo OMPFLAGS= >> sampleLine_mex.mki
echo OMPLINKFLAGS= >> sampleLine_mex.mki
echo EMC_COMPILER=msvc150>> sampleLine_mex.mki
echo EMC_CONFIG=optim>> sampleLine_mex.mki
"D:\Programs\MATLAB\R2018a\bin\win64\gmake" -j 1 -B -f sampleLine_mex.mk
