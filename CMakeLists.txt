cmake_minimum_required(VERSION 3.11)

add_library(arithmetic arithmetic.cc)
install(TARGETS arithmetic ARCHIVE DESTINATION lib)
install(FILES arithmetic.h DESTINATION include)
