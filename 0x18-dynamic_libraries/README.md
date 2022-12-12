# Dynamic Libraries

This project explores dynamic libraries. Dynamic libraries which is also known a shared library can generally be referred to as an upgrade to a static library. Dynamic libraries are created for the sole purpose of programs to have the capability of accessing them regardless of where they are stored in memory.

## Steps to create a dynamic library includes
- Creating your object files and ensuring they are not linkable and most importantly that they are positional independent by using the flag -FPIC

	**gcc -c filename.c -fpic**

- Create the dynamic files from the object files

	**gcc *.o -shared -o liball.so**

- Generate the object file of the main program

	**gcc -c main.c -o main.o**

- Link dynamic library to the executable

	**gcc -o main main.o -L -lall**

-Export the library to ensure that linux applications can find the shared library when they are located in a different directory

	**export LD_LIBRARY_PATH=:PATH**

