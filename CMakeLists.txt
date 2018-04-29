cmake_minimum_required(VERSION 3.6)
project(expressionTree)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        AddNode.cpp
        AddNode.h
        CMakeLists.txt
        ComponentNode.cpp
        ComponentNode.h
        LeafNode.cpp
        LeafNode.h
        main.cpp
        NegateNode.cpp
        NegateNode.h
       )

add_executable(expressionTree ${SOURCE_FILES})