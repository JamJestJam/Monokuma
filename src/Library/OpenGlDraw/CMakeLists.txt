file(GLOB FILES 
  "*.cpp" 
  "*.hpp"
)

add_library(${NAME_GAME_DRAW_LIB} STATIC ${FILES})
target_compile_options(${NAME_GAME_DRAW_LIB} PRIVATE ${FLAGS})
set_target_properties(${NAME_GAME_DRAW_LIB} PROPERTIES ${COMPILER_PROPERTIES})

target_include_directories(${NAME_GAME_DRAW_LIB} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
