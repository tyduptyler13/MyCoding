Lesson 0
========

This lesson is simple and will only require you familiarize yourself with some basic commands and how to setup the Atom editor for a lesson. (You can skip the atom lesson if you aren't using atom)

In any given lesson, you will edit a file usually called lesson<X>.cpp but in this example lesson the file is already done.

To create the executable run `make`. This will produce a file called lesson0. You can execute this program with `./lesson0` which will print "Hello World" to the console and exit. The ./ is required.

In most lessons you will also have test cases that you have to pass to complete a lesson. In order to run these tests you will need to run `make test` which ensures your file is compiled and then runs through a list of test cases.

This example does not have any test cases but you can run the command anyways.

Finally, for graded lessons there will be a `make grade` command which has hidden test cases and produces a score based on code quality, cases passed, memory used, and speed. Eventually this will let you compare yourself to friends.

Cleaning
--------

You can also clean up any build artifacts by running `make clean` which deletes all generated files produced by make or make test.

Atom
----

In order to setup atom for a lesson, you need to open atom, click File, and click add project folder. From the following window, locate this lesson and click ok. Now you will see the lesson on the left side of the screen.

If you want to just clump all of these lessons together then you can also just add the parent folder and you will see all of the lessons available below MyCoding in atom on the left side of the window.

