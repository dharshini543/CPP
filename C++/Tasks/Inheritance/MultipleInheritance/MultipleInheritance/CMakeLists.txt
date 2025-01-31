cmake_minimum_required(VERSION 3.16)

project(MultipleInheritance LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(MultipleInheritance main.cpp
    phone.h phone.cpp
    Camera.h Camera.cpp
    Music.h Music.cpp
    SmartPhone.h SmartPhone.cpp)

include(GNUInstallDirs)
install(TARGETS MultipleInheritance
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
