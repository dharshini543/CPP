cmake_minimum_required(VERSION 3.16)

project(Library_Task LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Library_Task main.cpp
    Library.h Library.cpp
    Student.h Student.cpp
    Librarian.h Librarian.cpp
    Book.h Book.cpp
    Transactions.h Transactions.cpp)

include(GNUInstallDirs)
install(TARGETS Library_Task
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
