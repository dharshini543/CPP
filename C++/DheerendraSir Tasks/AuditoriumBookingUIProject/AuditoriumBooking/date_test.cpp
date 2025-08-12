#include <gtest/gtest.h>
#include "date.h"

TEST(DateTest, ConstructorAndGetters) {
    Date d(23, 7, 2025);
    EXPECT_EQ(d.getDay(), 23);
    EXPECT_EQ(d.getMonth(), 7);
    EXPECT_EQ(d.getYear(), 2025);
}

TEST(DateTest, ComparisonOperatorLessThan) {
    Date a(22, 7, 2025);
    Date b(23, 7, 2025);
    EXPECT_TRUE(a < b);
    EXPECT_FALSE(b < a);
}

TEST(DateTest, EqualDatesNotLessThanEachOther) {
    Date a(23, 7, 2025);
    Date b(23, 7, 2025);
    EXPECT_FALSE(a < b);
}
