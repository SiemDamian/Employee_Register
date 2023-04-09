cmake_minimum_required(VERSION 3.21)
project(SiemieniecDamian-etap2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(SiemieniecDamian-etap2
        administrator.cpp
        administrator.h
        analityk.cpp
        analityk.h
        firma.h
        ksiegowy.cpp
        ksiegowy.h
        main.cpp
        pracownik.cpp
        pracownik.h
        programista.cpp
        programista.h
        stazysta.cpp
        stazysta.h)
