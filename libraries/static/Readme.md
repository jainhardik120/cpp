# Build

gcc -c lib_mylib.c -o lib_mylib.o
ar rcs lib_mylib.a lib_mylib.o

gcc -c driver.c -o driver.o
gcc -o driver driver.o -L. lib_mylib.a

./driver
