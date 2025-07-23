#include <gtest/gtest.h>
#include "day.h"

TEST(DayTest, GetDayReturnsCorrectValue) {
    Day d(12);
    EXPECT_EQ(d.getDay(), 12);
}
