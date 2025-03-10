cmake_minimum_required(VERSION 3.16)

project(WiFi_Task LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(WiFi_Task main.cpp
    WiFi.h WiFi.cpp
    CSV_FileOperation.h CSV_FileOperation.cpp)

include(GNUInstallDirs)
install(TARGETS WiFi_Task
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
