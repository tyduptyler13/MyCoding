Lesson 1
========

Hello world with some standard io.

Task
----
In this lesson your goal is to write code inside main that accepts input
and outputs a line in the following format: `Hello <input>`.

The input will always be one line (terminated by \n)
The input will always 0 or more characters.

Please edit lesson1.cpp

Background/Knowledge
--------------------
This section will be present in every lesson and will teach you the things you
need to know to complete your task. If you continue to struggle it is recommended
you search for help on stackoverflow or contact me in issues on github.

This project introduces you to the basic c++ file. The initial file should look
like:
```
#include <iostream>
#include <string>

using namespace std;

int main(){
  //TODO
  return 0;
}
```

I will explain every line and its purpose. If you already understand most of what
is going on then you can skip to "what you need to finish this lesson".

The first character we see is a `#` which in c++ means c preprocessor. You don't
have to know much about this but it is how you will include standard functionality
to do most interaction with the computer.

Next we see that that first character is followed by `include`. This is telling
the preprocessor to include an external file. In c++ this LITERALLY (not the
modern teen interpretation) means that when we see include, the preprocessor will
paste the contents of the file in place of this include.

Next we see `<iostream>`. This is both the file we are including and instructing
the preprocessor where it will find it. (Bonus look ahead: `<` and `"` do different
things when including a file but both are valid. When including a standard library
we always use `<`. `"` is used only for local files that are added via command line
or are in the same directory that the cpp file is in. [Reasoning](http://stackoverflow.com/a/3162067/986971))

We also see `#include <string>` but we already explained this. The only difference
is that we are including string instead of iostream.

Next is `using namespace std;`. This is a much more advanced topic and for now I
want to ask you to ignore it. If you must know you can open [this link](https://www.quora.com/What-does-using-namespace-std-mean-in-C++), but i make
no gaurantees that you won't just get more confused than you need to be.

Next we see `int main()`. This is the first actual code we are observing. This
code is called the main function. It is the entry point for all c/c++ code, meaning
that whenever you execute your final executable, it is starting here. Main always
returns an integer which is why we see `int`; this int is the status of the programs
exit. If our program exits successfully, we should return 0.

Next we have an area surrounded with `{}`. This is the function body of main.
All functions have a body and if the function has a return type (int in mains case)
then it will also ALWAYS have a return statement.

`//TODO` is a comment. This is ignored by the compiler and is primarily for
human notes in your code. You should leave notes about any strange/incomplete code
to ensure that it is understood.

`return 0` is called a return statement. The value after return must always match
the type of the return type on the function. We will cover type more soon.

`;` is a statement end. Think of it like codes period. All sentences should end with
punctuation but most will end with a period. In c++, most lines of code will end
with a semi colon.

__What you need to finish this lesson__

In order to save information in code you need to make a declaration of type.
<type> <name>; In this specific example we will be dealing only with a type called
string. A string is a collection of characters that has an order. This type is
extremely powerful in dealing with console input when characters are involved.

Example string declaration:
```
string s;
```

Strings can be added to and manipulated but this will be dealt with in a future lesson.
You will only need to declare one string in this lesson and reference it twice.

Next you need to understand what `cin` and `cout` do. `cin` is a special object
that allows you to read data in from the console. In order to read anything in
you simply need to "push" or "shift" data into the target object.
```
cin >> variable;
```

`cout` is similar except that you "push" or "shift" into cout from an object.
```
cout << variable;
```
This will print the value of variable to the command line.

Brief side track: `"Some text"` in c++ is called a string literal. This means
that you have a RAW string (not the same as a string) of text that can be used
anywhere in code similar to numbers. A string literal can be converted to a string
by assigning it to a string. `string s = "some text";`

Back to `cout`, you can also chain pushing to cout.
```
cout << var1 << " " << var2;
```

Finally for cout, if you want to end your text then you should end it with either
a `"\n"` or an `endl`. Functionally these both do the same thing now even though
you might hear differently from forums. They both end the current line of text and
print it to the console and both print the system specific line terminator.
Most of the time you will always have a line terminator for your console output.
The only time you might not want to is if you plan to keep printing to the current
line of text. Console output generally is easier to read with lots of newlines.

Testing your code
-----------------
If you wish to test your own code run `make` to build lesson1.
Next run `./lesson1`. The console should immediately go to waiting for input. You
can type your name and press enter and if your program is complete it will
print out "Hello name", or whatever your name is.

To run the official test just run `make test`

Grading
-------
This lesson is not graded.

Challenge for advanced users
----------------------------
Try implementing this program without using the class string.
