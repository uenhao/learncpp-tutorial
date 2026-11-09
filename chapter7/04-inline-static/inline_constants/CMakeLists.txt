add_executable(inline_demo main.cpp player.cpp)
target_include_directories(inline_demo PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
