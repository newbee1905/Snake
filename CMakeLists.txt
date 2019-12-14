cmake_minimum_required(VERSION 3.16.0)
project(snake)

include_directories(/usr/local/include)
link_directories(/usr/local/lib)

set(SFMLSNAKE_SOURCES main.cpp)
set (CMAKE_CXX_FLAGS "-Wall -pedantic")
set (CMAKE_BUILD_TYPE "Release")

add_executable(snake ${SFMLSNAKE_SOURCES})

TARGET_LINK_LIBRARIES(snake sfml-graphics sfml-window sfml-system)

install(TARGETS snake RUNTIME DESTINATION bin)
