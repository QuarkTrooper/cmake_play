cmake_minimum_required(VERSION 3.13.4)

project(TESTPROJ)

add_executable(${PROJECT_NAME} src/main.cpp test_lib/factorial_function.cpp)

#add_subdirectory(test_lib) # Check this

#target_link_libraries(${PROJECT_NAME} factorial_function) # Check this