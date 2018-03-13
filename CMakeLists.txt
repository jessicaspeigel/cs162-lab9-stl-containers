cmake_minimum_required(VERSION 3.9)
project(cs162_lab9_stl_containers)

set(CMAKE_CXX_STANDARD 11)

add_executable(cs162_lab9_stl_containers
    InputValidation.cpp
    InputValidation.hpp
    main.cpp
    Menu.cpp
    Menu.hpp Buffer.cpp Buffer.hpp Palindrome.cpp Palindrome.hpp)
