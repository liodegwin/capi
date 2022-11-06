cmake_minimum_required(VERSION 3.23)
project(capi C)

set(CMAKE_C_STANDARD 23)

add_executable(my_assert_1 assert/my_assert_1.c)
add_executable(my_assert_2 assert/my_assert_2.c)

add_executable(my_limits_1 limits/my_limits_1.c)

add_executable(my_stdio_fopen stdio/my_stdio_fopen.c)
add_executable(my_stdio_freopen stdio/my_stdio_freopen.c)
add_executable(my_stdio_read_1 stdio/my_stdio_read_1.c)
add_executable(my_stdio_write_1 stdio/my_stdio_write_1.c)
add_executable(my_stdio_getc stdio/my_stdio_fgetc.c)
add_executable(my_stdio_gets stdio/my_stdio_fgets.c)

add_executable(my_time_1 time/my_time_1.c)

add_executable(my_ctype_1 ctype/my_ctype_1.c)
