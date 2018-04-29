cmake_minimum_required(VERSION 3.6)
project(expressionTree)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        AddNode.cpp
        AddNode.h
        CMakeLists.txt
        ComponentNode.h
        LeafNode.cpp
        LeafNode.h
        main.cpp
        NegateNode.cpp
        NegateNode.h
        MultiplyNode.cpp MultiplyNode.h DivideNode.cpp DivideNode.h UnaryNode.cpp UnaryNode.h BinaryNode.cpp BinaryNode.h)

add_executable(expressionTree ${SOURCE_FILES})