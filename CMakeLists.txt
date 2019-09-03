cmake_minimum_required(VERSION 3.13.4)
project(sorts-AlejandroMamaniAndia199802)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS -pthread)



add_executable(sorts-AlejandroMamaniAndia199802 bubble.h counting.h insert.h main.cpp merge.h mocker.cpp mocker.h quick.h radix.h select.h shell.h sort.h tester.h tester.cpp)