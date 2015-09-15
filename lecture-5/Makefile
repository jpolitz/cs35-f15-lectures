isSorted1: isSorted1.cpp
	@ clang++ -o isSorted1 isSorted1.cpp

.PHONY : time1
time1: isSorted1
	@ time ./isSorted1

isSorted2: isSorted2.cpp
	@ clang++ -o isSorted2 isSorted2.cpp

.PHONY : time2
time2: isSorted2
	@ time ./isSorted2

times: isSorted1 isSorted2
	@echo "Time for isSorted1: "
	@ time ./isSorted1
	@echo "Time for isSorted2: "
	@ time ./isSorted2
