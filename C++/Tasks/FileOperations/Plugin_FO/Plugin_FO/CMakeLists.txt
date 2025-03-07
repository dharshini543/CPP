cmake_minimum_required(VERSION 3.16)

project(Plugin_FO LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Plugin_FO main.cpp
    Student.h Student.cpp
    StudentManager.h StudentManager.cpp
    File_operations.h File_operations.cpp
    TXT.h TXT.cpp)

include(GNUInstallDirs)
install(TARGETS Plugin_FO
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
