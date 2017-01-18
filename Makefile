#Fill in the dependencies and rules to make the make file
CC=gcc
LD=gcc
ifdef DEBUG
CFLAGS= -std=c99 -ggdb -Wall
else
CFLAGS= -std=c99 -O3
endif
LIBS= -lm

testVectors: testVectors.c vectors.c #depends on...
	#rule to make testVectors from dependencies HINT: you need to add a flag for the math library (google it)
	
vectors.o: vectors.c vectors.h #depends on...
	#rule to make vectors.o from dependencies

testVectors.o: testVectors.c vectors.c #depends on... 
	#rule to make testVectors.o from dependences

clean:
	rm *.o
	rm testVectors
