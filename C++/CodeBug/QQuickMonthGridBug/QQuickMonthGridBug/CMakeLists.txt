cmake_minimum_required(VERSION 3.16)

project(QQuickMonthGridBug VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add required Qt modules
find_package(Qt6 REQUIRED COMPONENTS Quick Qml Gui)

set(PROJECT_SOURCES
    main.cpp
)

qt_add_executable(QQuickMonthGridBug
    MANUAL_FINALIZATION
    ${PROJECT_SOURCES}
)

# Add private include path
target_include_directories(QQuickMonthGridBug PRIVATE
    ${Qt6Quick_PRIVATE_INCLUDE_DIRS}
)

# Link Qt modules
target_link_libraries(QQuickMonthGridBug PRIVATE
    Qt6::Quick
    Qt6::Qml
    Qt6::Gui
)

qt_finalize_executable(QQuickMonthGridBug)
