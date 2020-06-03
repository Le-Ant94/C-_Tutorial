//makefile is a way to describe the compilation process and which files depends on which files needed for compiling.  This is to minimize the amount of compilation necessary.
//useful on mac OS and linux, but syntax might be different on Windows

math: math_stuff.o math_utils.o

	g++ math_stuff.o math_utils.o -o math_stuff

math_stuff.o: math_stuff.cpp

	g++ -c math_stuff.cpp

math_utils.o: math_utils.cpp

	g++ -c math_utils.cpp

clean:

	rm *.o math
