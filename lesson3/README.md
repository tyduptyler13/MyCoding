Lesson3
=======
Learning to use functions to solve problems in pieces.

In this lesson you will be creating functions or pieces of code that are specific
to a certain task. These are extremely valuable when it comes to debugging code
and ensuring that your program works properly. These also will become more
important later on when you are learning object oriented programming and
polymorphism.

The basic structure of a function is fairly straight forward.
```
<return type> <funtion name>(<parameter type> <parameter name>, ...){
    <statements>
    return <value/variable>; //Not needed if return type is void.
}
```

The first part of a function is its return type. You can only return one thing from
a function at a time. (You can return multiple values while still conforming to
the rule of one return type and value but this will come into play later.) 

The next part of a function is its name. The name can be literally anything so 
long as it starts with a letter, has no special characters except underscore, and
is not beyond the maximum length for the compiler you are using. In general we usually
name things using its functionality and follow cammel case notation or underscore
notation. (People prefer each for various reasons.) Ex: `add`, you would expect
it to add its parameters and return the result. `isLarge` or `is_large` would
return a boolean depending on if the value was "large", which is up to the programmers
interpretation of large. (These aren't very good examples but you should get the idea).

Side notes: Cammel case is the use of capital letters for the start of every word
with the exception of the first. `myBigHorse` is cammel case. Underscore notation
is where you use underscores to separate the words. `my_big_horse`. People prefer
cammel case for its ease to type and underscore for its ease to read. While coding,
you should probably be prepared to use one or the other depending on who is in
charge of your code, you usually follow a common format dictated by them. (No matter
how bad you think the format is...)

Next we have parathesis and a list of parameters. The parathesis are to separate
the name from the list of parameters and make the code easier to understand. Parameters
are optional when defining a function as not all functions need input. For instance
you could have a function called generate random number and all it does is returns
a random number.

A parameter is sort of like a variable declaration except that it (usually) doesn't
have a value dictated in the function. Parameters at the end of a parameter list
are permitted to have values or what is called default parameters which essentially
allow the person calling a function not to have to specify their value.

Ex:
```
string createSalutation(string first, string last, string prefix = ""){
    string name;
    if (prefix != ""){
        name = prefix + " " + last;
    } else {
        name = last + ", " + first;
    }
    return name;
}
```
This can be called with `createSalutation("Bob", "Burger")` or 
`createSalutation("Bob", "Burger", "Mr")`

Finally is the function body, it can contain any number of statements and if the
return type is not void then it MUST contain a return statement and value. If the
return type is `void` then that means that the function does not return a value.
This can be useful if the function is modifying variables external to itself
or the function interacts with things external to the program, for instance prints
values to the console. If a function is void and does not interact with anything then
the function is generally useless and should not be used.

Bonus: Scope

I haven't mentioned how scope works until now because it wasn't very useful before.
Scope is the lifetime and accessibility of a variable. If you declare a variable
inside of a function, then it is accessible only to that function and only to statements
that come after it is defined. As such, functions themselves also have scope and can
only be used if they have already been declared (not necessarily defined). This is
important to consider for your function as main will not be able to call it
unless it was declared before hand.

Scope is useful because we don't want to crowd our program with new variable names,
especially when the variable only briefly serves a purpose and can be erased as soon
as the function is done.

Note: Scope can be created by any set of braces, even braces alone.
```
int a;
{
    a++;
    int b = a; //Declared inside the braces scope. Will be forgotten when the braces end.
}
cout << a << b; //b doesn't exist. This can't compile.
```

Scope is fairly simple but become more and more advanced as we talk about new topics
so I will just stop with this for now. If you have trouble with scope, then you may
need to consult stack overflow and wikipedia for more help. At most, the scope
in this program will only require you to consider variables inside the function and
main.

Task
----
Your goal is to write a function named `largest` that accepts 4 integers and returns
the largest of the values. Your function needs to go in the file called code.cpp.

If you run into trouble, you can read code.hpp for the function definition but you
will still need to write your own in code.cpp that has the same form. Try not to
read this if you can as it will help with your learning.

Secret:
It is also advantageous to write functions that solve for 2 and 3 numbers and then
pass 3 of the 4 into the 3 and 2 of the 3 into 2. This is an advanced technique called
recursion but barely even uses its full power. (We will come back to recursion later
when we touch on classes as there are situations where recursion is required to solve
the problem.)

Input:
All inputs will be integers as defined by `int`. The values can range anywhere
inside the rage of an `int`.

Output:
Large is not defined by the most positive, but instead the greatest in size.
-7 is "larger" than 5.

Grading
-------
Grading exists for this project but requires that your operating system be linux
based. (Others are untested.)

To test yourself run `make grade`. The only thing graded is accuracy of results using
hidden test cases. The grade file is compatible with linux based systems. I am still
working on a better way to do this.
