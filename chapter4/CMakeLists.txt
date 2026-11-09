# Chapter 4: fundamental data types
add_executable(ch4_sizeof_demo 01-fundamental-types/sizeof_demo.cpp)

add_executable(overflow_demo 02-integers/overflow_demo.cpp)
add_executable(fixed_width_demo 02-integers/fixed_width_demo.cpp)
add_executable(range_predict 02-integers/exercises/range_predict.cpp)

add_executable(float_precision 03-float-bool/float_precision.cpp)
add_executable(inf_nan 03-float-bool/inf_nan.cpp)
add_executable(bool_demo 03-float-bool/bool_demo.cpp)

add_executable(if_demo 04-if-statements/if_demo.cpp)
add_executable(sign_classify 04-if-statements/exercises/sign_classify.cpp)
add_executable(assignment_trap 04-if-statements/exercises/assignment_trap.cpp)
add_executable(sign_classify_answer 04-if-statements/solutions/sign_classify_answer.cpp)

add_executable(char_arith 05-chars-cast/char_arith.cpp)
add_executable(ascii_anchors 05-chars-cast/ascii_anchors.cpp)
add_executable(int_div_fix 05-chars-cast/exercises/int_div_fix.cpp)
add_executable(int_div_answer 05-chars-cast/solutions/int_div_answer.cpp)

add_executable(ch4_quiz_exp quiz/exercises/quiz_013.cpp)
