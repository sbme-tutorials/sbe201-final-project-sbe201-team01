cmake_minimum_required(VERSION 3.5 )

### c++11 standards
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

project( DNAmutations  )

include_directories( include1 )

add_executable( BWT apps1/BWTtest.cpp)
add_executable(suffix apps1/sufftest.cpp)
add_executable( main apps1/main.cpp)




