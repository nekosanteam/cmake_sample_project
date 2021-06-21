add_library(libA OBJECT lib_a.cpp)
target_include_directories(libA PUBLIC ${PROJECT_SOURCE_DIR}/include/lib)
