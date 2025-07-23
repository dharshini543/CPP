#include <gtest/gtest.h>
#include "auditoriumbookingmanager.h"
#include "date.h"

TEST(AuditoriumBookingManagerTest, AddAndBookAuditoriums) {
    AuditoriumBookingManager manager;
    manager.addAuditorium();

    Date date(23, 7, 2025);

    // Book auditorium with ID 1
    EXPECT_TRUE(manager.bookAuditorium(1, date));
    // Booking same auditorium again should fail
    EXPECT_FALSE(manager.bookAuditorium(1, date));
    // Invalid ID should fail
    EXPECT_FALSE(manager.bookAuditorium(99, date));
}

TEST(AuditoriumBookingManagerTest, BookingCounts) {
    AuditoriumBookingManager manager;
    manager.addAuditorium();

    Date date(24, 7, 2025);
    EXPECT_EQ(manager.getBookingCount(date), 0);

    manager.bookAuditorium(2, date);
    EXPECT_EQ(manager.getBookingCount(date), 1);
    EXPECT_EQ(manager.getAvailableCount(date), 4); // total 5 added
}
