add_executable(extern_demo globals.cpp main.cpp)
target_include_directories(extern_demo PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
add_executable(evil_case evil_case/evil.cpp)
add_executable(evil_fixed evil_case/evil_fixed.cpp)
