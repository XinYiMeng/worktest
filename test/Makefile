test1:test.o
	gcc -o test1 test.o
#fun.o:fun.cpp fun.h
#	gcc -c fun.cpp
test.o:test.cpp fun.h
	gcc -c test.cpp
.PHONY:clean
clean:
	rm test1 test.o
