cmake_minimum_required(VERSION 3.16)
find_package(Qt6 REQUIRED COMPONENTS Widgets)
target_link_libraries(AuditoriumBookingProject Qt6::Widgets)

project(AuditoriumBookingProject LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

target_sources(AuditoriumBookingProject
  PRIVATE
    CalendarWidget.h CalendarWidget.cpp
    CalendarWidget.h CalendarWidget.cpp
)

add_executable(AuditoriumBookingProject main.cpp
    Auditorium.h Auditorium.cpp
    AuditoriumBookingManager.h AuditoriumBookingManager.cpp
    Calender.h Calender.cpp
    Date.h Date.cpp
    Year.h Year.cpp
    Month.h Month.cpp
    Day.h Day.cpp
    Debug.h Debug.cpp)

include(GNUInstallDirs)
install(TARGETS AuditoriumBookingProject
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
