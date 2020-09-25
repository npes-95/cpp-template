set(MODULE_TARGET cpp-template-module)

add_library(${MODULE_TARGET} STATIC module.cpp)
target_include_directories(${MODULE_TARGET} PUBLIC .)

list(APPEND LIB_TARGETS ${MODULE_TARGET})

# propagate lib targets list to parent directory
set(LIB_TARGETS ${LIB_TARGETS} PARENT_SCOPE)

