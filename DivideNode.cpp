//
// Created by xintong cheng on 2018-04-29.
//

#include "DivideNode.h"



DivideNode::~DivideNode() {
    delete left;
    delete right;
}


double DivideNode::calculate() {
    return left->calculate() / right->calculate();
}

DivideNode::DivideNode(ComponentNode *left,ComponentNode *right) : BinaryNode(left, right) {}
