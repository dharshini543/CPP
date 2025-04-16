cmake_minimum_required(VERSION 3.16)

project(TheaterBookingTask LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(TheaterBookingTask main.cpp
    Calendar.h Calendar.cpp
    BookingSystem.h BookingSystem.cpp
    Auditorium.h Auditorium.cpp
    BookingDetails.h BookingDetails.cpp)

include(GNUInstallDirs)
install(TARGETS TheaterBookingTask
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
