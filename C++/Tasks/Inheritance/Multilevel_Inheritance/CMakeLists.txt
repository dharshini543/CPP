cmake_minimum_required(VERSION 3.16)

project(Multilevel_Inheritance LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Multilevel_Inheritance main.cpp
    College.h College.cpp
    student.h student.cpp
    Lecture.h Lecture.cpp)

include(GNUInstallDirs)
install(TARGETS Multilevel_Inheritance
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
