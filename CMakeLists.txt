cmake_minimum_required(VERSION 3.23)
project(capi C)

set(CMAKE_C_STANDARD 23)

add_executable(my_assert_1 assert/my_assert_1.c)
add_executable(my_assert_2 assert/my_assert_2.c)

add_executable(my_limits_1 limits/my_limits_1.c)
