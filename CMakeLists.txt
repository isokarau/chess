cmake_minimum_required(VERSION 3.20)
project(chess)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5Core REQUIRED)
find_package(Qt5Widgets REQUIRED)
find_package(Qt5Multimedia REQUIRED)

# TODO change the way of SOURCES detection; 
# TODO make src/core as a separate independent static lib, so it can be reused in src/ui or other modules
set(SOURCES
    src/core/Piece.h
    src/core/Piece.cpp
    src/core/Game.h
    src/core/Game.cpp
    src/core/Board.h
    src/core/Board.cpp

    src/ui/view/ChessBoardView.h
    src/ui/view/ChessBoardView.cpp
    
    src/ui/main.cpp
)

add_executable(chess ${SOURCES})

target_link_libraries(${PROJECT_NAME} Qt5::Core)
target_link_libraries(${PROJECT_NAME} Qt5::Widgets)
target_link_libraries(${PROJECT_NAME} Qt5::Multimedia)