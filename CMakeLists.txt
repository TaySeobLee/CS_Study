cmake_minimum_required(VERSION 3.20)
project(CS_Study CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# src 라이브러리/실습
add_subdirectory(src)

# 테스트
enable_testing()
add_subdirectory(tests)
