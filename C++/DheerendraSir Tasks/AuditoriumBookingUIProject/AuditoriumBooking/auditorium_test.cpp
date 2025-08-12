#include <gtest/gtest.h>
#include "auditorium.h"

TEST(AuditoriumTest, ConstructorSetsID) {
    Auditorium a(3);
    EXPECT_EQ(a.getID(), 3);
}
