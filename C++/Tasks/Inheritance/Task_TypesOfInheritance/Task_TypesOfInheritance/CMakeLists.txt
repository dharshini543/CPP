cmake_minimum_required(VERSION 3.16)

project(Task_TypesOfInheritance LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Task_TypesOfInheritance main.cpp
    Employee.h Employee.cpp
    Manager.h Manager.cpp
    Engineer.h Engineer.cpp
    TechHead.h TechHead.cpp)

include(GNUInstallDirs)
install(TARGETS Task_TypesOfInheritance
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
