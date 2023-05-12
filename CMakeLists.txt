cmake_minimum_required(VERSION 3.18)

project(demo)

set(CMAKE_CXX_STANDARD 17)

include(./cmake/deps.cmake)

include_directories(${CMAKE_CURRENT_LIST_DIR})
include_directories(${CMAKE_CURRENT_LIST_DIR}/src)
include_directories(${CMAKE_CURRENT_LIST_DIR}/src/demo1)

aux_source_directory(${CMAKE_CURRENT_LIST_DIR}/src SRC_DIR)
aux_source_directory(${CMAKE_CURRENT_LIST_DIR}/src/demo1 SRC_DIR)

add_executable(main ${SRC_DIR})

target_link_libraries(main PRIVATE nlohmann_json::nlohmann_json)