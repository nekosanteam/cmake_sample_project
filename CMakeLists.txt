cmake_minimum_required(VERSION 3.13)
project(CMakeSample CXX)
enable_testing()

add_executable(sample main.cpp)
target_include_directories(sample PUBLIC ./include)
target_link_libraries(sample srcA libA)

add_subdirectory(lib)
add_subdirectory(platforms)
add_subdirectory(src)
add_subdirectory(apps)
add_subdirectory(tests)
add_subdirectory(benches)
