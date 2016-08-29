/**
 * I see that you are reading this, hopefully you figured out what the function
 * should look like on your own or you ran into trouble and this will help you
 * figure out what you did wrong. 
 * 
 * You also might be wondering what this file is for.
 * This file exists to allow both the test script and grading script connect to
 * your code. The test script and grading script have their own main functions,
 * even if you can't see the grading scripts code. They both use this file,
 * called a header file to process the functions expected definition and use it
 * in their own respective code. I could have hidden this from you, but it needed
 * to be somewhere and it made sense to put it where it normally goes. Header files
 * will make more sense later so don't worry too much about it.
 */

#ifndef CODE_HPP //Magic hand waving, ignore the weird code on the page.
#define CODE_HPP //These will be explained later.

/**
 * This is what a function declaration looks like when its body is not defined.
 * This allows code to actually be defined elsewhere and you can still use the
 * function anyways. The compiler sees this and knows to except a definition
 * somewhere down the road and uses this as a placeholder until that time.
 * 
 * You will also notice that the parameters don't have names. Things calling a
 * function usually don't care what the names where/are as long as they pass them
 * in in the same order and rank as expected. You can still add names here for
 * humans but the compiler doesn't need them.
 * 
 * When you actually define the function, all of the parameters will need names
 * though. Hopefully you can figure out why.
 */
int largest(int, int, int, int);

#endif //More handwaving
