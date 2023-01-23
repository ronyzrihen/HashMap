cmake_minimum_required(VERSION 3.24)
project(Hash_Map)

set(CMAKE_CXX_STANDARD 17)

add_executable(Hash_Map main.cpp OverFlowSizeCheck.cpp OverFlowSizeCheck.h HashMap.h Pair.h CastumExeption.h)
