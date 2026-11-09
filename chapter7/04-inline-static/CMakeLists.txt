add_executable(static_demo static_demo.cpp)
add_executable(id_generator exercises/id_generator.cpp)
add_executable(id_generator_answer solutions/id_generator_answer.cpp)

add_executable(inline_demo inline_constants/main.cpp inline_constants/player.cpp)
target_include_directories(inline_demo PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/inline_constants)
