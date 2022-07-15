@echo off
set MATLAB=D:\Programs\MATLAB\R2018a
set MATLAB_ARCH=win64
set MATLAB_BIN="D:\Programs\MATLAB\R2018a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=returnLines
set MEX_NAME=returnLines
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for returnLines > returnLines_mex.mki
echo COMPILER=%COMPILER%>> returnLines_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> returnLines_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> returnLines_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> returnLines_mex.mki
echo LINKER=%LINKER%>> returnLines_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> returnLines_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> returnLines_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> returnLines_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> returnLines_mex.mki
echo OMPFLAGS= >> returnLines_mex.mki
echo OMPLINKFLAGS= >> returnLines_mex.mki
echo EMC_COMPILER=msvc150>> returnLines_mex.mki
echo EMC_CONFIG=optim>> returnLines_mex.mki
"D:\Programs\MATLAB\R2018a\bin\win64\gmake" -j 1 -B -f returnLines_mex.mk
