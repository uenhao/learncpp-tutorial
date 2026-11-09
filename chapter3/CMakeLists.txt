# Chapter 3: debugging (sources are demo/exercise files)

add_executable(semantic_levels 01-syntax-semantic/semantic_levels.cpp)

add_executable(wrong_value 02-debug-process/exercises/wrong_value.cpp)

add_executable(hilo_hunt 03-strategy/exercises/hilo_hunt.cpp)

add_executable(missing_parens 04-basic-tactics/exercises/missing_parens.cpp)
add_executable(literal_arg 04-basic-tactics/exercises/literal_arg.cpp)

add_executable(conditional_debug 05-more-tactics/conditional_debug.cpp)

add_executable(stepping_demo 06-debugger-stepping/stepping_demo.cpp)
add_executable(step_hunt 06-debugger-stepping/exercises/step_hunt.cpp)
add_executable(step_hunt_solution 06-debugger-stepping/solutions/step_hunt_fixed.cpp)

add_executable(breakpoints_demo 07-debugger-breakpoints/breakpoints_demo.cpp)
add_executable(loop_hunt 07-debugger-breakpoints/exercises/loop_hunt.cpp)

add_executable(watch_demo 08-debugger-watch/watch_demo.cpp)
add_executable(watch_hunt 08-debugger-watch/exercises/watch_hunt.cpp)

add_executable(callstack_demo 09-debugger-callstack/callstack_demo.cpp)
add_executable(crash_trace 09-debugger-callstack/exercises/crash_trace.cpp)

add_executable(test_factorial 10-prevention/exercises/test_factorial.cpp)
add_executable(test_factorial_answer 10-prevention/solutions/test_factorial_answer.cpp)

add_executable(ch3_quiz_q1 quiz/exercises/quiz_q1.cpp)
add_executable(ch3_quiz_q2 quiz/exercises/quiz_q2.cpp)
