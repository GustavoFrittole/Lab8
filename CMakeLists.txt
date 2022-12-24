cmake_minimum_required(VERSION 3.0)

project(Lab8)

add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(libs)

target_include_directories(histo PUBLIC include)

target_include_directories(${PROJECT_NAME} PUBLIC include)

target_link_libraries(${PROJECT_NAME} histo)