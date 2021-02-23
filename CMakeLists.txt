cmake_minimum_required(VERSION 3.17)
project(AlgorithmTemplate)

set(CMAKE_CXX_STANDARD 11)


include_directories(
        ${CMAKE_CURRENT_SOURCE_DIR}/include
        ${CMAKE_CURRENT_SOURCE_DIR}/googletest/include
)
link_directories(
        ${CMAKE_CURRENT_SOURCE_DIR}/src
        ${CMAKE_CURRENT_SOURCE_DIR}/src/sort
        ${CMAKE_CURRENT_SOURCE_DIR}/googletest
)


# 添加下级目录，生成.a文件
add_subdirectory( ./googletest)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bin")


## main.cpp
aux_source_directory(./src SRC_LIST)
aux_source_directory(./src/sort SRC_LIST)
aux_source_directory(./src/search SRC_LIST)
aux_source_directory(./src/graph SRC_LIST)
aux_source_directory(./src/tools SRC_LIST)
set(SOURCE_FLIES main.cpp )


add_executable(${PROJECT_NAME} ${SOURCE_FLIES} ${SRC_LIST})
target_link_libraries(${PROJECT_NAME} gtest)


add_executable(SortTest test/SortTest.cpp ${SRC_LIST})
target_link_libraries(SortTest gtest)


add_executable(SearchTest test/SearchTest.cpp ${SRC_LIST})
target_link_libraries(SearchTest gtest)

add_executable(GraphTest test/GraphTest.cpp ${SRC_LIST})
target_link_libraries(GraphTest gtest)