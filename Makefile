CC=g++ -std=c++11

all: FunLibs clean

FunLibs: main.o
	$(CC) main.o -o FunLibs

main.o: main.cpp
	$(CC) main.cpp

.PHONY: clean
clean:
	rm -rf *.o *.gch
