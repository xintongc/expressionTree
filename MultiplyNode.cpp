//
// Created by xintong cheng on 2018-04-29.
//

#include "MultiplyNode.h"

MultiplyNode::MultiplyNode() {}

MultiplyNode::~MultiplyNode() {
    delete left;
    delete right;
}
MultiplyNode::MultiplyNode(ComponentNode *l, ComponentNode *r) {
    left = l;
    right = r;
}

double MultiplyNode::calculate() {
    return left->calculate() * right->calculate();
}