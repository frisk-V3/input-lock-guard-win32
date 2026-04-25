cmake_minimum_required(VERSION 3.10)
project(InputLockGuard)

set(CMAKE_CXX_STANDARD 17)

add_executable(InputLockGuard
    src/main.cpp
    src/input_lock.cpp
    src/hotkey.cpp
)

target_include_directories(InputLockGuard PRIVATE include)
