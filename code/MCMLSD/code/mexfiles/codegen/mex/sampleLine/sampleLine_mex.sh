MATLAB="/Applications/MATLAB_R2017a.app"
Arch=maci64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/Users/yimingqian/Library/Application Support/MathWorks/MATLAB/R2017a"
OPTSFILE_NAME="./setEnv.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for sampleLine" > sampleLine_mex.mki
echo "CC=$CC" >> sampleLine_mex.mki
echo "CFLAGS=$CFLAGS" >> sampleLine_mex.mki
echo "CLIBS=$CLIBS" >> sampleLine_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> sampleLine_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> sampleLine_mex.mki
echo "CXX=$CXX" >> sampleLine_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> sampleLine_mex.mki
echo "CXXLIBS=$CXXLIBS" >> sampleLine_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> sampleLine_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> sampleLine_mex.mki
echo "LDFLAGS=$LDFLAGS" >> sampleLine_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> sampleLine_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> sampleLine_mex.mki
echo "Arch=$Arch" >> sampleLine_mex.mki
echo "LD=$LD" >> sampleLine_mex.mki
echo OMPFLAGS= >> sampleLine_mex.mki
echo OMPLINKFLAGS= >> sampleLine_mex.mki
echo "EMC_COMPILER=clang" >> sampleLine_mex.mki
echo "EMC_CONFIG=optim" >> sampleLine_mex.mki
"/Applications/MATLAB_R2017a.app/bin/maci64/gmake" -B -f sampleLine_mex.mk
