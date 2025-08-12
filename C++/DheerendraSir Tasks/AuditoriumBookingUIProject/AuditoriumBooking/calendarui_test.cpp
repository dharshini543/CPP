// #include <gtest/gtest.h>
// #include "../calendarui.h"  // Update to actual path

// class CalendarUITest : public ::testing::Test {
// protected:
//     CalendarUI calendarUI;
// };

// TEST_F(CalendarUITest, DateNavigation) {
//     calendarUI.showPreviousMonth();
//     EXPECT_GE(calendarUI.m_currentMonth, 0);
//     EXPECT_GE(calendarUI.m_currentYear, 0);

//     calendarUI.showNextMonth();
//     EXPECT_GE(calendarUI.m_currentMonth, 0);
//     EXPECT_GE(calendarUI.m_currentYear, 0);
// }

// TEST_F(CalendarUITest, DayButtonCreation) {
//     calendarUI.updateCalendar();
//     EXPECT_FALSE(calendarUI.m_dayButtons.empty());
// }

// TEST_F(CalendarUITest, ShowAuditoriumButtons) {
//     calendarUI.showAuditoriumButtonsForDate(5);
//     // This test just verifies it doesn't crash
//     SUCCEED();
// }
