CXX = clang++
CXXFLAGS = ""
OFILES = "unittest-cpp/CMakeFiles/UnitTest++.dir/UnitTest++/"
VG="/Users/joe/Downloads/valgrind-3.11.0/vg-in-place"

test: main.o arrayStringList.o stringList.h arrayStringList.h unittest-cpp/
	@ $(CXX) $(CXXFLAGS) -o run_tests main.cpp arrayStringList.o $(OFILES)/*.o $(OFILES)/Posix/*.o
	@ ./run_tests

unittest-cpp/:
	git clone https://github.com/unittest-cpp/unittest-cpp
	cd unittest-cpp && cmake ./ && $(MAKE)

