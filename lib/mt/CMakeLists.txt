project(mt)

add_library(${PROJECT_NAME} INTERFACE)
set(MT_INCLUDE_DIR ${PROJECT_SOURCE_DIR})
target_link_libraries(${PROJECT_NAME} ${COMMON_LIB_DEPS})

target_include_directories(
        ${PROJECT_NAME}
        INTERFACE
        .
)
