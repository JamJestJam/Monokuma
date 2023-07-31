cmake_minimum_required(VERSION 3.27)
project(Monopoly)

set(NAME_CLIENT ${PROJECT_NAME}-client)
set(NAME_SERVER ${PROJECT_NAME}-server)
set(NAME_GAME_LOGIC_LIB ${PROJECT_NAME}-game-logic-lib)
set(NAME_GAME_DRAW_LIB ${PROJECT_NAME}-game-draw-lib)

set(CMAKE_CXX_COMPILER g++)
set(FLAGS -Wall -Wextra -Werror -pedantic -Wconversion -fmodules-ts -O3) 
set(COMPILER_PROPERTIES CXX_STANDARD 23 CXX_STANDARD_REQUIRED ON) 

add_subdirectory("./src/Library/GameLogic")
add_subdirectory("./src/Library/OpenGlDraw")
add_subdirectory("./src/Client")
add_subdirectory("./src/Server")