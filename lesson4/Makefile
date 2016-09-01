
CFLAGS=-Wall -Wextra -pedantic --std=c++11
TESTFLAGS=-L../deps/googletest/googletest/ -lgtest -lgtest_main

all:
	@echo "Please use make grade or make test"

test: test1 test2
	@echo "Tests will only be run if changes have been made to the related source files."

test1: array.cpp
	$(CXX) $(CFLAGS) -I../deps/googletest/googletest/include array.cpp $(TESTFLAGS) -o test1 && ./test1

test2: main.cpp
	@echo "You can run this manually with ./test2 or use ./test2.sh for automated testing."
	$(CXX) $(CFLAGS) main.cpp -o test2 && ./test2.sh

grade:
	@echo "Grading is not yet available for this lesson."

clean:
	@rm -f grade test
