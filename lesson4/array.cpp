/**
 * In this file you will add code for checking strings for palindromes.
 */

#include <string>
//The following are recommended, but not required. See cppreference.com for details on what these contain.
#include <regex>
#include <locale>
#include <algorithm>

#include "gtest/gtest.h"

using namespace std;

bool isPalindrome(string s, bool clean = false) {
    //Your code goes here.

}

//No main is required for this lesson.

//Run make test1 for testing this task alone.

//This is the default test cases, you will AT LEAST see these in the grading script.
TEST(Lesson4, Default){
    
    EXPECT_TRUE(isPalindrome("race car"));
    EXPECT_FALSE(isPalindrome("stressed"));
    EXPECT_TRUE(isPalindrome("A man, a plan, a canal, Panama!"));
    EXPECT_TRUE(isPalindrome("Dammit I’m mad."
        "Evil is a deed as I live."
        "God, am I reviled? I rise, my bed on a sun, I melt."
        "To be not one man emanating is sad. I piss."
        "Alas, it is so late. Who stops to help?"
        "Man, it is hot. I’m in it. I tell."
        "I am not a devil. I level “Mad Dog”."
        "Ah, say burning is, as a deified gulp,"
        " In my halo of a mired rum tin."
        "I erase many men. Oh, to be man, a sin."
        "Is evil in a clam? In a trap?"
        "No. It is open. On it I was stuck."
        "Rats peed on hope. Elsewhere dips a web."
        "Be still if I fill its ebb."
        "Ew, a spider… eh?"
        "We sleep. Oh no!"
        "Deep, stark cuts saw it in one position."
        "Part animal, can I live? Sin is a name."
        "Both, one… my names are in it."
        "Murder? I’m a fool."
        "A hymn I plug, deified as a sign in ruby ash."
        "A Goddam level I lived at."
        "On mail let it in. I’m it."
        "Oh, sit in ample hot spots. Oh wet!"
        "A loss it is alas (sip). I’d assign it a name."
        "Name not one bottle minus an ode by me:"
        "“Sir, I deliver. I’m a dog”"
        "Evil is a deed as I live."
        "Dammit I’m mad.")); //Really long poem by demetri martin, tests just about everything.
    
    EXPECT_FALSE(isPalindrome("aab"));
    EXPECT_FALSE(isPalindrome("Aa b"));
    EXPECT_FALSE(isPalindrome("Some really long string that isn't possibly a palindrome"));
    
    EXPECT_TRUE(isPalindrome(" aaa")); //Weird whitespace
    EXPECT_TRUE(isPalindrome(" a a  a   ")); //More weird whitespace.
}

//The following is your test cases

TEST(Lesson4, Custom){
    //If you have test cases add them here.
}
