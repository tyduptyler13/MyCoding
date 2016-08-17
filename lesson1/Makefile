SHELL:=/bin/bash

all:
	$(CXX) -Wall -Wextra -pedantic lesson1.cpp -o lesson1

test: all
	@echo "Testing \"name\""
	@./lesson1 <<< "name" | egrep -q "Hello, name" && echo "Passed." || echo "Failed. Expected Hello, name"
	@echo "Testing \"name and eman\""
	@./lesson1 <<< "name and eman" | egrep -q "Hello, name" && echo "Passed." || echo "Failed. Expected Hello, name"

clean:
	rm lesson1
