cmake_minimum_required(VERSION 3.26)
project(C_Mastermind C)

set(CMAKE_C_STANDARD 11)

add_executable(C_Mastermind
        main.c
        menu.c
        menu.h
        gameFunction.c
        gameFunction.h
)
