cmake_minimum_required(VERSION 3.16)

project(TheaterBookingProject LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(TheaterBookingProject main.cpp

    Auditorium.h Auditorium.cpp
    AuditoriumBookingManager.h AuditoriumBookingManager.cpp
    Date.h Date.cpp
    Year.h Year.cpp
    Month.h Month.cpp
    Calender.h Calender.cpp
)

include(GNUInstallDirs)
install(TARGETS TheaterBookingProject
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
