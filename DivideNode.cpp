//
// Created by xintong cheng on 2018-04-29.
//

#include "DivideNode.h"

DivideNode::DivideNode() {}

DivideNode::~DivideNode() {
    delete left;
    delete right;
}
DivideNode::DivideNode(ComponentNode *l, ComponentNode *r) {
    left = l;
    right = r;
}

double DivideNode::calculate() {
    return left->calculate() / right->calculate();
}