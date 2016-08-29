CFLAGS=-I../deps/googletest/googletest/include -Wall -Wextra -pedantic --std=c++11
TESTFLAGS=-L../deps/googletest/googletest/ -lgtest_main -lgtest -lpthread

all: code.o
	@echo "Note that this only test compiles your own code. It does not build an executable."

../deps/googletest/googletest/libgtest.a: | ../deps/googletest/googletest
	cd ../deps/googletest/googletest && cmake . && make

../deps/googletest/googletest: ../deps/googletest
	git submodule update ../deps/googletest

../deps/googletest:
	git submodule init ../deps/googletest

code.o: code.cpp
	$(CXX) $(CFLAGS) -c code.cpp -o code.o

test: code.o ../deps/googletest/googletest/libgtest.a
	$(CXX) $(CFLAGS) code.o test.cpp $(TESTFLAGS) -o test
	@echo "Built tests. Running test"
	./test

grade: code.o ../deps/googletest/googletest/libgtest.a
	$(CXX) $(CFLAGS) code.o grade.o $(TESTFLAGS) -o grade
	@echo "Built grade program. Running..."
	./grade

clean:
	@rm test code.o grade
