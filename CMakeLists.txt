cmake_minimum_required(VERSION 3.29)
project(videogioco)

set(CMAKE_CXX_STANDARD 20)

add_executable(videogioco main.cpp
        Arma.cpp
        Arma.h
        item.cpp
        item.h
        Character.cpp
        Character.h
        Entity.cpp
        Entity.h)
