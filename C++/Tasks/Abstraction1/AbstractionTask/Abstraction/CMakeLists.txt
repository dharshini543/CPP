cmake_minimum_required(VERSION 3.16)

project(Abstraction LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Abstraction main.cpp
    atm.h atm.cpp
    bankaccount.h bankaccount.cpp)

include(GNUInstallDirs)
install(TARGETS Abstraction
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
