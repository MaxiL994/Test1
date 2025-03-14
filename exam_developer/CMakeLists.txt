cmake_minimum_required(VERSION 3.20)
project(developer_exam C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra -pedantic")

# Define the library
add_library(devlib
    src/developer/developer.c
    src/developer_group/developer_group.c
)

# Specify include directories for the library
target_include_directories(devlib PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/src/developer
    ${CMAKE_CURRENT_SOURCE_DIR}/src/developer_group
)

# Define the main executable
add_executable(developer_exam_exec src/main.c)

# Link the library to the executable
target_link_libraries(developer_exam_exec PRIVATE devlib)