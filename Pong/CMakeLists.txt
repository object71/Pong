project(Pong LANGUAGES C)

add_executable(Pong
               src/main.h
               src/main.c
               src/pad.c
               src/pad.h
               src/ball.c
               src/ball.h
               )

target_include_directories(Pong PRIVATE ${raylib_INCLUDE_DIRS})
target_link_libraries(Pong PRIVATE ${raylib_LIBRARIES} fmt::fmt)