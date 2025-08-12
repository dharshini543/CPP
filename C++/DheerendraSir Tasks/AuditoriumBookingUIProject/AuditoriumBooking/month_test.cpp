#include <gtest/gtest.h>
#include "month.h"

TEST(MonthTest, ConstructorAndGetMonth) {
    Month m(7);
    EXPECT_EQ(m.getMonth(), 7);
}

TEST(MonthTest, AddDayAndRetrieve) {
    Month m(7);
    m.addDay(15);
    Day* d = m.getDay(15);
    ASSERT_NE(d, nullptr);
    EXPECT_EQ(d->getDay(), 15);
}

TEST(MonthTest, GetDayInvalidReturnsNull) {
    Month m(7);
    EXPECT_EQ(m.getDay(99), nullptr);
}

TEST(MonthTest, DaysInMonthCheckLeapYear) {
    Month m(1); // any month value to construct object
    EXPECT_EQ(m.getDaysInMonth(2, 2024), 29); // Leap year
    EXPECT_EQ(m.getDaysInMonth(2, 2023), 28); // Non-leap
    EXPECT_EQ(m.getDaysInMonth(4, 2023), 30); // April
    EXPECT_EQ(m.getDaysInMonth(1, 2023), 31); // January
}
