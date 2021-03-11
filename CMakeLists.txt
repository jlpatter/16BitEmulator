cmake_minimum_required(VERSION 3.10)
project(16BitEmulator)

set(CMAKE_CXX_STANDARD 14)

add_executable(16BitEmulator main.cpp gates/not_gate.h gates/not_gate.cpp gates/and_gate.h gates/nand_gate.h gates/nand_gate.cpp gates/and_gate.cpp)