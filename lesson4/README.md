Lesson 4
========
This lesson is tasked with explaining how arrays work. Arrays are long lists of
data all aranged in a specific order based on how they were input.

In C++ you have several options for managed arrays. All of these are called containers
and will be used in nearly every program you write (Not all, but usually at least
one.) A managed array is just a class that automatically manages the memory for you
so that you don't have to clean up after you are done. Normal raw arrays require
that you manage arrays manually.

* [vector](http://www.cplusplus.com/reference/vector/vector/) - This is probably
the most used class as it is a generic array container. Allows placing elements
at the end or modifying existing elements directly.
* [list](http://www.cplusplus.com/reference/list/list/) - This is similar to vector
except that it permits inserting data from either end and modifying order is cheap
by comparison, its flaw is that random access is slow. You will learn more about
why when you reach data structures and algorithms.
* [forward_list](http://www.cplusplus.com/reference/forward_list/forward_list/) -
Similar to the other list but more restrictive in what is allowed.
* [array](http://www.cplusplus.com/reference/array/array/) - A very useful class
for creating lists where the size does not change.
* queue - Allows elements to be placed in and removed in the order the were put in.
* deque - Allows for a combination of stack and queue
* stack - Allows elements to be placed in and removed in reverse order.

All of these containers are very powerful but require template arguements. Templates
will be fully explained later, but for now, templates are things you apply to a
class to change its internals to contain/use the template you insert. Templates
can be other classes or even the core types like `int`, `bool`, etc. Templates are
more complicated that that but for now just assume that for all of the containers,
you need to specify what is going to be inside that container. For instance,
`vector<string> v;` will contain strings. `vector<int>` will contain ints. You can
not mix and match types using this method so when creating a container, assume
that it MUST only contain the type provided in the template.

The array class requires a second template parameter, length. To create an array
you would use `array<string, 5> a` which would create an array of strings of length 5.
Its length cannot be changed once created. Most other containers will automatically
expand as you place things in, and shrink (sometimes) if the container has elements
removed. Array class is created with its full length and will not change. Accessing
elements beyond its range will simply access memory outside of the list and could
result it a segfault or illegal memory access. I will get into this more in the
pointers lesson, for now just know that if you see segfault or segmentation fault
in an error that you have accessed memory that doesn't belong to you and thus
you are passing bad values to your array `[]` operators.

For just C in general you can also have raw arrays but this requires you move to
the next lesson in order to understand how they work and how to reserve memory
manually for these lists. The closest you can get for now is to use the array
class which efficively does the same thing but much more safely.

Finally, the string class is also an array, but it is specialized for managing
characters. It is most closely related to the vector class but you will see that
strings have only a few of the same methods and internals.

Task 1
------
In this task you will check strings to see if they are palindromes. It is up to
you to decide how to implement this. Your code will go into a function called
`isPalindrome`. It accepts one string as a parameter and returns bool, true if
its a palindrome.

A palindrome is a string that is the same forwards as it is backwards. This does
not include spaces or special characters so you will need to ignore them as you
check. Capitalization is also not important.

Ex:
* "A man, a plan, a canal, Panama!" - A valid palindrome (should return true)
* "a" - A valid palindrome (the same forward and back)
* "ab" - Not valid
* "Noon" - Valid

Things you should know
----------------------
Arrays are pretty simple to operate. For palindrome testing, you can use a for loop
to scan over the characters while ignoring any non alphabet characters.

To access a specific character in a string you can use the `[]` operator which
allows you to access an element in an array. You use it like so:
```
string s = "some list of characters";
cout << s[0]; //Will output s.
cout << s[3]; //Will output e.
```
All arrays are 0 based. Meaning that the first element is at position 0. This is
because of how pointers work, when using the `[n]` operator you are saying give me
the value at n away from the first element.

The second method is to use `at` method which works pretty much the same as the
`[]` operator.

Bonus:

There is also a special for loop for marching over characters in an array. This
may not come in handy for this lesson, but might in future lessons.
```
for (char c : s){ //s is any string.
    cout << c << '\n'; //Prints every character in string, one per line.
}
```

Task 2
------
In this task you will finally learn to handle the main parameters. The function
main does not just return int, it also can accept command line arguements.

Your task is to write a program that reads in the program parameters and sorts
them alphabetically, then prints them out.

main should look like this:
```
int main(int argc, char** argv){
    //your code
    return 0;
}
```

Edit main.cpp when you are ready.

Things you need to know
-----------------------
For this task you will need to know that main either accepts no arguments or two
arguements. The first is how many parameters have been passed to the program.
The second is a raw array of character arrays. Raw arrays can only be accessed via
the `[]` operator and for string type arrays, end when you see the null character.
The null character can be expressed in code with `'\0';`. To make things easy on
yourself I would recommend simply creating strings from the parameters, strings
will automatically find the length of the strings and will give you all the
capabilities that come with strings.

`string s(argv[1]); //constructs a string from an input parameter.`

Also, you need to know that your program will always have at least one parameter.
The first parameter at position 0 is always the program name. This is given to you
because you can overwrite it to change what your process shows up as in a task
manager or top program.

Finally, to sort you will use the function sort for sorting strings. Sort accepts
at least two arguments. The first two are the important ones, you must pass in the
starting position of an array and the end position of the array. To get the start
and end position of a vector, should you decide to use it, you use `begin()` and
`end()` methods on your vector as the first and second parameters.

Example:
```
//We have some vector of strings aka vector<string> v;
sort(v.begin(), v.end());
//v is now sorted.
```

Test
----

To test both run `make test`
To test an individual task run `make test1` or `make test2`

Grade
-----

Grading for this lesson will include efficiency in time and accuracy.

Grading is not yet available.
