file(GLOB FILES 
  "*.cpp" 
  "*.hpp"
  "*.cppm"
)

add_executable(${NAME_CLIENT} ${FILES}) 
target_compile_options(${NAME_CLIENT} PRIVATE ${FLAGS})
set_target_properties(${NAME_CLIENT} PROPERTIES ${COMPILER_PROPERTIES})

target_link_libraries(${NAME_CLIENT} ${NAME_GAME_DRAW_LIB}) 
target_link_libraries(${NAME_CLIENT} ${NAME_GAME_LOGIC_LIB}) 