project(Jansson101)
SET (CMAKE_C_COMPILER "${DEVROOT}/usr/bin/clang")
add_executable(test main.c)
target_link_libraries(test jansson)
