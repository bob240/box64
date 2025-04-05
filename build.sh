git clone https://github.com/ptitSeb/box64
cd box64
mkdir build
cd build
cmake .. -DCMAKE_C_COMPILER=aarch64-linux-gnu-gcc -DARM64=1 -DWINLATOR_GLIBC=1 -DARM_DYNAREC=1 -DBAD_SIGNAL=1 -DCMAKE_BUILD_TYPE=Release -DBOX32=1
make -j
tar -zvcf ./box64_w10u.tar.gz ./box64
patchelf --set-interpreter /data/data/com.winlator/files/rootfs/lib/ld-linux-aarch64.so.1 ./box64
tar -zvcf ./box64_w10.tar.gz ./box64
cd ..
mkdir buildNo32
cd buildNo32
cmake .. -DCMAKE_C_COMPILER=aarch64-linux-gnu-gcc -DARM64=1 -DWINLATOR_GLIBC=1 -DARM_DYNAREC=1 -DBAD_SIGNAL=1 -DCMAKE_BUILD_TYPE=Release
make -j
tar -zvcf ./box64_w10u_nobox32.tar.gz ./box64
patchelf --set-interpreter /data/data/com.winlator/files/rootfs/lib/ld-linux-aarch64.so.1 ./box64
tar -zvcf ./box64_w10_nobox32.tar.gz ./box64
