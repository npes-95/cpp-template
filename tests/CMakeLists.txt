list(REMOVE_ITEM APP_SRCS "${PROJECT_SOURCE_DIR}/src/main.cpp") # remove app main from sources

file(GLOB_RECURSE TEST_SRCS *.cpp)

add_executable(${TEST_TARGET} ${TEST_SRCS} ${APP_SRCS}) # this could be extended to create an executable per module

target_include_directories(${TEST_TARGET} PRIVATE ${PROJECT_SOURCE_DIR}/extern/catch ${APP_INCLUDES}) # include test framework

add_test(test-all ${TEST_TARGET})