run: posn.h posn.o main.cpp
	clang++ -o main main.cpp posn.o
	./main

posn.o: posn.h posn.cpp
	clang++ -c posn.cpp
