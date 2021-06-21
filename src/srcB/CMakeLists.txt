add_library(srcB OBJECT src_b.cpp)
target_include_directories(srcB PUBLIC ${PROJECT_SOURCE_DIR}/include/src)
target_link_libraries(srcB libB)
