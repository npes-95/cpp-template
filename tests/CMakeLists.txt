file(GLOB_RECURSE TEST_SRCS *.cpp)

add_executable(${TEST_TARGET} ${TEST_SRCS}) # this could be extended to create an executable per module

target_include_directories(${TEST_TARGET} PRIVATE ${PROJECT_SOURCE_DIR}/extern/catch) # include test framework

target_link_libraries(${TEST_TARGET} PRIVATE ${LIB_TARGETS})

add_test(test-all ${TEST_TARGET})