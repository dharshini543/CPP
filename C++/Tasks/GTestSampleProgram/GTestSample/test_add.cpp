#include <gtest/gtest.h>
#include "add.h"

TEST(AdditionTest, PositiveNumbers) {
    EXPECT_EQ(add(2, 3), 5.0);
}

TEST(AdditionTest, NegativeNumbers) {
    EXPECT_EQ(add(-1, -4), -5);
}

TEST(AdditionTest, MixedNumbers) {
    EXPECT_EQ(add(-2, 3), 1);
}

TEST(AdditionTest, Zero) {
    EXPECT_EQ(add(0, 0), 0);
    EXPECT_EQ(add(5, 0), 5);
}

