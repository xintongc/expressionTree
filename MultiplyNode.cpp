//
// Created by xintong cheng on 2018-04-29.
//

#include "MultiplyNode.h"


MultiplyNode::~MultiplyNode() {
    delete left;
    delete right;
}


double MultiplyNode::calculate() {
    return left->calculate() * right->calculate();
}

MultiplyNode::MultiplyNode(ComponentNode *right, ComponentNode *left) : BinaryNode(right, left) {}
