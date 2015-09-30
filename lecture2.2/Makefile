run: posn.h posn.o main.cpp
	clang++ -o main main.cpp posn.o
	./main

run_example: posn.h posn.o testPosnDynamic.cpp
	clang++ -o testPosn testPosnDynamic.cpp posn.o
	./testPosn

posn.o: posn.h posn.cpp
	clang++ -c posn.cpp
