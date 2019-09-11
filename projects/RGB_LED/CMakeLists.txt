cmake_minimum_required(VERSION 3.8.2)

arduino_cmake_project(RGB_LED BOARD_NAME uno)

set(CMAKE_TOOLCHAIN_FILE ../cmake/Arduino-Toolchain.cmake)

# include_directories($ENV{ARDUINO_SDK_PATH}/hardware/tools/avr/avr/include)

add_arduino_executable(RGB_LED src/rgb_led.cpp)

set_target_upload_port(RGB_LED /dev/ttyACM0)
