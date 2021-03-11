cmake_minimum_required(VERSION 3.10)
project(16BitEmulator)

set(CMAKE_CXX_STANDARD 14)

add_executable(16BitEmulator src/main.cpp include/gates/NOTGate.h src/gates/NOTGate.cpp include/gates/ANDGate.h include/gates/NANDGate.h src/gates/NANDGate.cpp src/gates/ANDGate.cpp src/gates/ORGate.cpp include/gates/ORGate.h include/gates/XORGate.h src/gates/XORGate.cpp include/arithmetics/HalfAdder.h src/arithmetics/HalfAdder.cpp)