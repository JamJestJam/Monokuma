# wersja c++ do kompilacji
cmake_minimum_required(VERSION 3.10)
# nazwa projektu
project(Monopoly)

# pliki do kompilacji
set(CLIENT_FILES ./src/Client/main.cpp)
set(SERVER_FILES ./src/Server/main.cpp)
set(GAME_RULES_LIB_FILES ./src/Library/GameLogic/main.cpp)
set(DRAW_LIB_FILES ./src/Library/OpenGlDraw/main.cpp)

set(FLAGS -Wall -Wextra -Werror -pedantic -Wconversion) # fagi używane w kompilacji
set(MY_PROPERTIS CXX_STANDARD 20 CXX_STANDARD_REQUIRED ON) # ustawienie wersji c++

#kompilacja bibliotek
add_library(${PROJECT_NAME}-logic-lib STATIC ${GAME_RULES_LIB_FILES})
target_compile_options(${PROJECT_NAME}-logic-lib PRIVATE ${FLAGS}) # flagi kompilacji
set_target_properties(${PROJECT_NAME}-logic-lib PROPERTIES ${MY_PROPERTIS}) # ustawienie wersji c++

add_library(${PROJECT_NAME}-draw-lib STATIC ${DRAW_LIB_FILES})
target_compile_options(${PROJECT_NAME}-draw-lib PRIVATE ${FLAGS}) 
set_target_properties(${PROJECT_NAME}-draw-lib PROPERTIES ${MY_PROPERTIS})

# kompilacja klienta
add_executable(${PROJECT_NAME}-client ${CLIENT_FILES}) # jakie pliki wchodzą w kompilacje
target_compile_options(${PROJECT_NAME}-client PRIVATE ${FLAGS}) 
set_target_properties(${PROJECT_NAME}-client PROPERTIES ${MY_PROPERTIS})
target_link_libraries(${PROJECT_NAME}-client ${PROJECT_NAME}-logic-lib ) # dołączanie lib
target_link_libraries(${PROJECT_NAME}-client ${PROJECT_NAME}-draw-lib) # dołączanie lib

# kompilacja serwera
add_executable(${PROJECT_NAME}-server ${CLIENT_FILES}) 
target_compile_options(${PROJECT_NAME}-server PRIVATE ${FLAGS}) 
set_target_properties(${PROJECT_NAME}-draw-lib PROPERTIES ${MY_PROPERTIS})
target_link_libraries(${PROJECT_NAME}-server ${PROJECT_NAME}-logic-lib) 