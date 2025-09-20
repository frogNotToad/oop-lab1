#include "gtest/gtest.h"
#include "is_valid_parentheses.h"

TEST(ParenthesesTest, EmptyInput) {
    EXPECT_TRUE(is_valid_parentheses(""));
}

TEST(ParenthesesTest, SimpleInput) {
    EXPECT_TRUE(is_valid_parentheses("()"));
}

TEST(ParenthesesTest, NotClosedInput) {
    EXPECT_FALSE(is_valid_parentheses("(()"));
}

TEST(ParenthesesTest, RightInput1) {
    EXPECT_TRUE(is_valid_parentheses("(()())()"));
}

TEST(ParenthesesTest, RightInput2) {
    EXPECT_TRUE(is_valid_parentheses("((()()())())(()())"));
}

TEST(ParenthesesTest, RightInput3) {
    EXPECT_TRUE(is_valid_parentheses("((((()))))"));
}

TEST(ParenthesesTest, WrongInput1) {
    EXPECT_FALSE(is_valid_parentheses("())"));
}

TEST(ParenthesesTest, WrongInput2) {
    EXPECT_FALSE(is_valid_parentheses("(()())())"));
}

TEST(ParenthesesTest, WrongInput3) {
    EXPECT_FALSE(is_valid_parentheses("(()()()(()())"));
}
