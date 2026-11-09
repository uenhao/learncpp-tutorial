# Chapter 7: scope, duration, linkage
add_executable(shadow_demo 02-globals-shadowing/shadow_demo.cpp)
add_executable(shadow_hunt 02-globals-shadowing/exercises/shadow_hunt.cpp)
add_executable(shadow_hunt_fixed 02-globals-shadowing/solutions/shadow_hunt_fixed.cpp)
add_executable(global_demo 02-globals-shadowing/global_demo.cpp)

add_subdirectory(03-linkage)

add_executable(static_demo 04-inline-static/static_demo.cpp)
add_executable(id_generator 04-inline-static/exercises/id_generator.cpp)
add_executable(id_generator_answer 04-inline-static/solutions/id_generator_answer.cpp)
add_subdirectory(04-inline-static/inline_constants)

add_executable(ch7_quiz_9 quiz/exercises/quiz_counter.cpp)
