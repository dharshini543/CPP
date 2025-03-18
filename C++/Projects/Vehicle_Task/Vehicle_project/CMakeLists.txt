cmake_minimum_required(VERSION 3.16)

project(Vehicle_project LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Vehicle_project main.cpp
    Vehicle.h Vehicle.cpp
    Bike.h Bike.cpp
    Car.h Car.cpp
    Vehicle_Manager.h Vehicle_Manager.cpp
    Rental_Customer_details.h Rental_Customer_details.cpp

    Bike_FileOperation.h Bike_FileOperation.cpp
    Car_FileOperation.h Car_FileOperation.cpp
    Customer_FileOperation.h Customer_FileOperation.cpp
)

include(GNUInstallDirs)
install(TARGETS Vehicle_project
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
