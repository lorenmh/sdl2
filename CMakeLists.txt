cmake_minimum_required(VERSION 3.9)
project(game)

set(CMAKE_CXX_STANDARD 11)

find_package(SDL2 REQUIRED)
find_package(OpenGL REQUIRED)
find_package(GLEW REQUIRED)

include_directories(
        game
        ${SDL2_INCLUDE_DIRS}
        ${OPENGL_INCLUDE_DIRS}
        ${GLEW_INCLUDE_DIRS}
)

#file(COPY assets DESTINATION game)
#configure_file(assets/test.bmp test.bmp COPYONLY)

add_executable(game main.cpp)
target_link_libraries(
        game
        ${SDL2_LIBRARIES}
        ${OPENGL_LIBRARIES}
        ${GLEW_LIBRARIES}
)