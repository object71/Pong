project(Main LANGUAGES CXX)

add_executable(Main
               src/Main.cpp
               src/Main.h
               src/Pad.cpp src/Pad.h src/Ball.cpp src/Ball.h src/Game.cpp src/Game.h)

target_include_directories(Main PRIVATE ${raylib_INCLUDE_DIRS})
target_link_libraries(Main PRIVATE ${raylib_LIBRARIES} fmt::fmt)