cmake_minimum_required(VERSION 3.19)
project(Juego)

set(CMAKE_CXX_STANDARD 14)

add_executable(Juego main.cpp)
target_link_libraries(Juego -lmingw32 -lallegro-5.0.10-monolith-md-debug)