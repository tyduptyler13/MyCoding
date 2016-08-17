Lesson 2
========

In this lesson you will learn to use conditional statements, for loops, and some numeric types.

Input
-----

A single number between 0-1000 indicating how many cases there will be.

A case is a line containing two numbers (could be decimal) A and B. 

Output
------
You are to print the result A - B for every case on a new line.

Example
-------

Input:
```
2
1 2
4 3.1
```
Output:
```
-1
0.9
```

Background/Knowledge
--------------------

First thing you will need to understand are the base types of C/C++

The list is pretty short but will give you everything you need for everything you
do, now and in the future.

* `int` - One of the base types, holds a number and is allowed to be negative.
* `unsigned` - Same as an integer but does not have negatives. (This is a modifier
and can be used in front of all integer types. When used by itself it is equivalent
to `unsigned int`)
* `long` - Equivalent to `int` on most machines.
* `long long` - Same as int but has wider range of numbers it can represent.
* `float` - A number that can represent a huge range of values including those with
a decimal.
* `double` - Similar to float except that it has even more numbers it can represent.
* `bool` - A true or false value
* `short` - Similar to an int except it has a smaller range of values.
* `char` - Is technically a number but when sent to cout it will display as a character.

For more details on exact ranges that a value can represent see [this](https://en.wikipedia.org/wiki/C_data_types#Basic_types)


Next you will need to understand how a for loop works. The base structure of a for
loop is simple. There are three sections of the initial for loop followed by the
for loop body.

```
for (<initializer>; <condition>; <post statement>){
    <body>
}
```
The Initializer is for creating any variales that you plan to use to detect which
element you are on. For instance if you have to do something n times, then you should
have an integer that you count up until you reach n. Detecting when to finish is
dictated by the condition statement. It is simple logic that must return a boolean
value. The statement is a section that gets executed after every time the foor loop
body completes.

Useful example for this lesson:
```
for (int i = 0; i < n; ++i){ //++i means pre increment. Similar to i = i + 1; or i += 1; or i++;
    //Do something
}
```

Finally, as a bonus, and for those that don't know any operators I will cover
a few of the core operators that you will find useful.

* `+`,`-`,`/`,`*` - Plus, minus, divide, multiply (Use on left and right integers.)
* `+=`, `-=`, `/=`, `*=` - Shortcut operators to add, multiply, etc the value and another and store it back in itself.
* `++`, `--` - A shortcut to add or subract one from a value. If used before the variable then its pre, otherwise post.
(Pre and post return the initial or post value if also being stored, aka ++i != i++)
* `==`, `!=` equal and not equal, returns boolean
* `>`, `>=`, `<=`, `<` less than, less than or equal, etc. All return boolean.

Challenge
---------
The following challenge is simple. Instead of using a for loop, you are to use
a while loop. A while loop is like a for loop except it only has one statement,
the conditional statement. `while(<condition>)`

Grading
-------
No grading is available for this challenge. There aren't enough variables to
strongly differentiate between any two programs.
