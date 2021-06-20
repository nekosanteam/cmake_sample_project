add_executable(app_b app_b.cpp)
target_include_directories(app_b PUBLIC ${PROJECT_SOURCE_DIR}/include)
target_link_libraries(app_b srcB libB)
