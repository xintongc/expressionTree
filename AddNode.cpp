//
// Created by xintong cheng on 2018-04-29.
//

#include "AddNode.h"
#include <iostream>
using namespace std;



AddNode::~AddNode() {

}

double AddNode::calculate() {
    return left->calculate() + right->calculate();
}

AddNode::AddNode(ComponentNode *right, ComponentNode *left) : BinaryNode(right, left) {}
