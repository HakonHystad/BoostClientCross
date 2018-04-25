cmake_minimum_required (VERSION 2.6)
project (ExampleClient)

set (CMAKE_CXX_STANDARD 11)

FIND_PACKAGE( Boost 1.55.0 REQUIRED COMPONENTS system filesystem)
INCLUDE_DIRECTORIES( ${Boost_INCLUDE_DIR} )

link_directories(${Boost_LIBRARY_DIRS})

add_executable(ExampleClient example_client.cpp KUKAVARPROXY_movement.h)
TARGET_LINK_LIBRARIES( ExampleClient LINK_PUBLIC ${Boost_LIBRARIES} )

