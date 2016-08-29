
/**
 * Glad to see you reading the test cases. You can learn a lot from reading
 * other peoples code.
 * 
 * We include the header file so we can use the function. We don't need the
 * actual definition of the function until link time. (Fancy compiler speak for
 * replace place holders with the actual code.)
 */
#include "code.hpp"

#include "gtest/gtest.h"

TEST(Lesson3, Default){
    EXPECT_EQ(4, largest(1,2,3,4));
    EXPECT_EQ(2, largest(0,-1,2,0));
    EXPECT_EQ(-2, largest(0,-2,1,0));
}

TEST(Lesson3, Custom){
    //You can also add your own tests here. Just follow the same format that these
    //other tests have used.

}
