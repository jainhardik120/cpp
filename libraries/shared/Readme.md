# Build

gcc -shared -fPIC -o liblibrary.so library.c
gcc application.c -L. -llibrary -o sample

gcc -c -fPIC library.c
gcc -shared -o libdynamic.so library.o
gcc application.c -L. -ldynamic

g++ rundyn.cpp -ldl -o rundyn.o
./rundyn.o
