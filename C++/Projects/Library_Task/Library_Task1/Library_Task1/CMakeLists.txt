cmake_minimum_required(VERSION 3.16)

project(Library_Task1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Library_Task1 main.cpp
    Library.h Library.cpp
    Librarian.h Librarian.cpp
    Student.h Student.cpp
    Book.h Book.cpp)

include(GNUInstallDirs)
install(TARGETS Library_Task1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
