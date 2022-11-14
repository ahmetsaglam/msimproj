cmake_minimum_required(VERSION 3.7)
project(GraphAlgorithms)

set(CMAKE_CXX_STANDARD 14)

#set(SOURCE_FILES main.cpp Graph.cpp Graph.h)
set(SOURCE_FILES main.cpp)
add_executable(GraphAlgorithms ${SOURCE_FILES})

#add_executable(zed_wrapper_node ${NODE_SRC})
# target_link_libraries(GraphAlgorithms ${LINK_LIBRARIES})
# add_dependencies(zed_wrapper_node ${catkin_EXPORTED_TARGETS})
