add_library(engine STATIC)

target_sources(engine
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/src/engine.cpp
)

target_include_directories(engine
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include/engine
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/include/gamestate
)