# each lib CMakeLists.txt responsible for adding their target to LIB_TARGETS
add_subdirectory(module)

# propagate lib targets list to parent directory
set(LIB_TARGETS ${LIB_TARGETS} PARENT_SCOPE) 