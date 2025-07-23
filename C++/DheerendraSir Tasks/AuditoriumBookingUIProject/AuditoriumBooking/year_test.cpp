#include <gtest/gtest.h>
#include "year.h"
#include "month.h"

// Fixture for Year tests
class YearTest : public ::testing::Test {
protected:
    Year* year;

    void SetUp() override {
        year = new Year(2025);
    }

    void TearDown() override {
        delete year;
    }
};

TEST_F(YearTest, ConstructorAndGetYear) {
    EXPECT_EQ(year->getYear(), 2025);
}

TEST_F(YearTest, GetMonthReturnsNullIfNotExists) {
    EXPECT_EQ(year->getMonth(3), nullptr); // March not added
}

TEST_F(YearTest, AddMonthThenRetrieveIt) {
    year->addMonth(3); // Add March
    Month* m = year->getMonth(3);
    ASSERT_NE(m, nullptr);
    EXPECT_EQ(m->getMonth(), 3);
}

TEST_F(YearTest, AddMultipleMonths) {
    year->addMonth(1);
    year->addMonth(2);
    year->addMonth(3);

    EXPECT_NE(year->getMonth(1), nullptr);
    EXPECT_NE(year->getMonth(2), nullptr);
    EXPECT_NE(year->getMonth(3), nullptr);
    EXPECT_EQ(year->getMonth(4), nullptr); // not added
}
