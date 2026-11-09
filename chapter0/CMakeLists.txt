# Each directory hosts one lesson; each .cpp builds to an executable
# named after the source file.
add_executable(step_by_step 01-cpp-development/main.cpp 01-cpp-development/add.cpp)

add_lesson(02-compiler-linker-libraries
    first_program.cpp
)

add_lesson(03-build-configurations
    sizeof_demo.cpp
)

add_lesson(04-language-standard
    check_standard.cpp
)

add_lesson(04-language-standard/solutions
    warning_hunt_fixed.cpp
)

add_lesson(02-compiler-linker-libraries/solutions
    broken_program_fixed.cpp
)
