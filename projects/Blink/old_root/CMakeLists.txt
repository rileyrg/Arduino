cmake_minimum_required(VERSION 3.8.2)

# message([STATUS] $ENV{ARDUINO_SDK_PATH})

# set(ENV{ARDUINO_SDK_PATH} "illegal")
set (CMAKE_CXX_STANDARD 11)

set(CMAKE_TOOLCHAIN_FILE ../cmake/Arduino-Toolchain.cmake)

project(Blink)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)


arduino_cmake_project(Blink BOARD_NAME uno)

# include_directories($ENV{ARDUINO_SDK_PATH}/hardware/tools/avr/avr/include .piolibdeps/IRremote_ID4)
include_directories($ENV{ARDUINO_SDK_PATH}/hardware/tools/avr/avr/include)

# file(GLOB_RECURSE HDRS *.h)


add_arduino_executable(Blink src/main.cpp)


set_target_upload_port(Blink /dev/ttyACM0)
