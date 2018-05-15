all: main 

main: main.o complex.o
	g++ -g $^ -o $@

main.o: main.cpp 
	g++ -g -c -Wall -pedantic $< -o $@

complex.o: complex.cpp complex.h
	g++ -g -c -Wall -pedantic $< -o $@

.PHONY: clean

clean:
	-rm complex.o main.o main
