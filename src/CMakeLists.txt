set(APP_INCLUDES )

file(GLOB_RECURSE APP_SRCS *.cpp)
set(APP_INCLUDES .)

add_executable(${APP_TARGET} ${APP_SRCS})

target_include_directories(${APP_TARGET} PRIVATE ${APP_INCLUDES})

target_link_libraries(${APP_TARGET} PUBLIC ${LIB_TARGETS})