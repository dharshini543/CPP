cmake_minimum_required(VERSION 3.16)

project(AuditoriumBookingProject LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Enable Qt features
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

# Find Qt
find_package(Qt6 REQUIRED COMPONENTS Widgets)

# Add your source files
add_executable(AuditoriumBookingProject
    main.cpp
    Auditorium.h Auditorium.cpp
    AuditoriumBookingManager.h AuditoriumBookingManager.cpp
    Calender.h Calender.cpp
    Date.h Date.cpp
    Year.h Year.cpp
    Month.h Month.cpp
    Day.h Day.cpp
    Debug.h Debug.cpp
    CalendarWidget.h CalendarWidget.cpp
)

# Include current directory (or use a dedicated include/ directory)
target_include_directories(AuditoriumBookingProject PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

# Link against Qt libraries
target_link_libraries(AuditoriumBookingProject PRIVATE Qt6::Widgets)

# Installation
include(GNUInstallDirs)
install(TARGETS AuditoriumBookingProject
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
