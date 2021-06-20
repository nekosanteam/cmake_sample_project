add_executable(app_a app_a.cpp)
target_include_directories(app_a PUBLIC ${PROJECT_SOURCE_DIR}/include)
target_link_libraries(app_a srcA libA)
