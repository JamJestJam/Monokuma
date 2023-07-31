file(GLOB FILES 
  "*.cpp" 
  "*.hpp"
)

add_executable(${NAME_SERVER} ${FILES}) 
target_compile_options(${NAME_SERVER} PRIVATE ${FLAGS})
set_target_properties(${NAME_SERVER} PROPERTIES ${COMPILER_PROPERTIES})

target_link_libraries(${NAME_SERVER} ${NAME_GAME_LOGIC_LIB}) 