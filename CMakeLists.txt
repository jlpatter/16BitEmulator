cmake_minimum_required(VERSION 3.10)
project(16BitEmulator)

set(CMAKE_CXX_STANDARD 14)

add_executable(16BitEmulator src/main.cpp include/gates/NotGate.h src/gates/NotGate.cpp include/gates/AndGate.h include/gates/NandGate.h src/gates/NandGate.cpp src/gates/AndGate.cpp src/gates/OrGate.cpp include/gates/OrGate.h)