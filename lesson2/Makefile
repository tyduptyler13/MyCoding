SHELL:=/bin/bash
DIFF=diff -y --suppress-common-lines

all: lesson2.cpp
	$(CXX) -Wall -Wextra -pedantic lesson2.cpp -o lesson2

test: all
	@$(DIFF) <(./lesson2 <input.txt ) solution.txt >> out.txt && echo "Correct" || echo "Incorrect, see out.txt" 

clean:
	rm lesson2

