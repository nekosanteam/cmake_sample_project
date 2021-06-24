cmake_minimum_required(VERSION 3.13)
project(CMakeSample CXX)
enable_testing()

add_executable(sample main.cpp)

add_subdirectory(lib)
add_subdirectory(platforms)
add_subdirectory(src)
add_subdirectory(apps)
add_subdirectory(tests)
add_subdirectory(benches)
