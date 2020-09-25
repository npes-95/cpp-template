cmake_minimum_required(VERSION 3.0.0)
project(cpp-template VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 17)

include(CTest)
enable_testing()

# VARIABLES
set(APP_TARGET ${CMAKE_PROJECT_NAME}-app)
set(TEST_TARGET ${CMAKE_PROJECT_NAME}-test)
set(LIB_TARGETS )

# LIB
add_subdirectory(lib)

# APP
add_subdirectory(src)

# TESTS
add_subdirectory(tests)

# COMPILER OPTS
if(MSVC)
  target_compile_options(${APP_TARGET} PRIVATE /W4 /WX)
  target_compile_options(${TEST_TARGET} PRIVATE /W4 /WX)
else()
  target_compile_options(${APP_TARGET} PRIVATE -Wall -Wextra -pedantic -Werror)
  target_compile_options(${TEST_TARGET} PRIVATE -Wall -Wextra -pedantic -Werror)
endif()