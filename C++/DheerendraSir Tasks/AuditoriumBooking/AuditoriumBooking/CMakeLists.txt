# cmake_minimum_required(VERSION 3.16)

# project(AuditoriumBooking LANGUAGES CXX)

# set(CMAKE_CXX_STANDARD 17)
# set(CMAKE_CXX_STANDARD_REQUIRED ON)

# # Find and enable Qt
# find_package(Qt6 REQUIRED COMPONENTS Widgets)

# add_executable(AuditoriumBooking main.cpp
#     Auditorium.h Auditorium.cpp
#     AuditoriumBookingManager.h AuditoriumBookingManager.cpp
#     Calender.h Calender.cpp
#     Date.h Date.cpp
#     Day.h Day.cpp
#     Debug.h Debug.cpp
#     Month.h Month.cpp
#     Year.h Year.cpp
#     CalendarWidget.h CalendarWidget.cpp)

# # Link Qt to your project
# target_link_libraries(AuditoriumBooking Qt6::Widgets)

# include(GNUInstallDirs)
# install(TARGETS AuditoriumBooking
#     LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
#     RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
# )



cmake_minimum_required(VERSION 3.16)

project(AuditoriumBooking LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# ✅ Enable automatic processing for Qt's meta-object system
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

# Find and enable Qt
find_package(Qt6 REQUIRED COMPONENTS Widgets)

add_executable(AuditoriumBooking main.cpp
    Auditorium.h Auditorium.cpp
    AuditoriumBookingManager.h AuditoriumBookingManager.cpp
    Calender.h Calender.cpp
    Date.h Date.cpp
    Day.h Day.cpp
    Debug.h Debug.cpp
    Month.h Month.cpp
    Year.h Year.cpp
    CalendarWidget.h CalendarWidget.cpp)

# Link Qt to your project
target_link_libraries(AuditoriumBooking Qt6::Widgets)

include(GNUInstallDirs)
install(TARGETS AuditoriumBooking
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

