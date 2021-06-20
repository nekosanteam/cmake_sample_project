add_library(libB OBJECT lib_b.cpp)
target_include_directories(libB PUBLIC ${PROJECT_SOURCE_DIR}/include)
