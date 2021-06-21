add_library(srcA OBJECT src_a.cpp)
target_include_directories(srcA PUBLIC ${PROJECT_SOURCE_DIR}/include/src)
target_link_libraries(srcA libA)
