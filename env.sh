TOOLCHAINS=~/src/ncs/toolchains
VERSION=v2.1.0

export PATH=$TOOLCHAINS/$VERSION/bin:$TOOLCHAINS/$VERSION/usr/bin:$TOOLCHAINS/$VERSION/usr/local/bin:$TOOLCHAINS/$VERSION/opt/bin:$TOOLCHAINS/$VERSION/opt/nanopb/generator-bin:$TOOLCHAINS/$VERSION/opt/zephyr-sdk/arm-zephyr-eabi/bin:$PATH
export LD_LIBRARY_PATH=$TOOLCHAINS/$VERSION/usr/lib:$TOOLCHAINS/$VERSION/usr/lib/x86_64-linux-gnu:$TOOLCHAINS/$VERSION/usr/local/lib

. zephyr/zephyr-env.sh

