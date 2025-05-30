cmake_minimum_required(VERSION 3.10)
project(print)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(print STATIC sources/print.cpp)
target_include_directories(print PUBLIC include)

add_executable(example1 examples/example1.cpp)
target_link_libraries(example1 print)

add_executable(example2 examples/example2.cpp)
target_link_libraries(example2 print)

install(TARGETS print DESTINATION lib)
install(TARGETS example1 example2 DESTINATION bin)
install(DIRECTORY include/ DESTINATION include)
