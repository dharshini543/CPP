#include <gtest/gtest.h>
#include "calendar.h"
#include "auditoriumbookingmanager.h"
#include "month.h"
#include "date.h"

// Mocks & setup
class DummyBookingManager : public AuditoriumBookingManager {
public:
    DummyBookingManager() {
        addAuditorium(); // default 5 auditoriums
    }
};

TEST(CalenderTest, ConstructorSetsCurrentDate) {
    Calender cal;
    int sysYear = cal.getCurrentYear();
    int sysMonth = cal.getCurrentMonth();
    int sysDay = cal.getCurrentDay();

    Date d = cal.getCurrentDate();

    EXPECT_EQ(d.getYear(), sysYear);
    EXPECT_EQ(d.getMonth(), sysMonth);
    EXPECT_EQ(d.getDay(), sysDay);
}

TEST(CalenderTest, SetAndGetYearMonth) {
    Calender cal;
    cal.setYearAndMonth(2022, 5);

    Month* m = cal.getMonth(2022, 5);
    ASSERT_NE(m, nullptr);
    EXPECT_EQ(m->getMonth(), 5);
}

TEST(CalenderTest, AddYearAndRetrieve) {
    Calender cal;
    EXPECT_EQ(cal.getYear(2025), nullptr);
    cal.addYear(2025);
    EXPECT_NE(cal.getYear(2025), nullptr);
}

TEST(CalenderTest, GetMonthAutoAddsYearAndMonth) {
    Calender cal;
    Month* m = cal.getMonth(2030, 6);
    ASSERT_NE(m, nullptr);
    EXPECT_EQ(m->getMonth(), 6);
}

TEST(CalenderTest, BookingManagerSetAndGet) {
    Calender cal;
    DummyBookingManager dummy;
    cal.setBookingManager(&dummy);

    EXPECT_EQ(cal.bookingManager(), &dummy);
}
