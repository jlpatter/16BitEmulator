cmake_minimum_required(VERSION 3.10)
project(16BitEmulator)

set(CMAKE_CXX_STANDARD 14)

add_executable(16BitEmulator main.cpp gates/NotGate.h gates/NotGate.cpp gates/AndGate.h gates/NandGate.h gates/NandGate.cpp gates/AndGate.cpp gates/OrGate.cpp gates/OrGate.h)