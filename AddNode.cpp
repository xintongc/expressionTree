//
// Created by xintong cheng on 2018-04-29.
//

#include "AddNode.h"
#include <iostream>
using namespace std;

AddNode::AddNode(ComponentNode *l, ComponentNode *r) {
    left = l;
    right = r;
}


int AddNode::calculate() {
    return left->calculate() + right->calculate();
}
