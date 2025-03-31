cd box64
mkdir build
cd build
cmake .. -DCMAKE_C_COMPILER=aarch64-linux-gnu-gcc -DARM64=1 -DWINLATOR_GLIBC=1 -DARM_DYNAREC=1 -DBAD_SIGNAL=1 -DCMAKE_BUILD_TYPE=Release -DBOX32=1
make -j
patchelf --set-interpreter /data/data/com.winlator/files/rootfs/lib/ld-linux-aarch64.so.1 ./box64
