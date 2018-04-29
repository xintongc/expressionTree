//
// Created by xintong cheng on 2018-04-29.
//

#include "NegateNode.h"



NegateNode::~NegateNode() {
    delete right;
}



double NegateNode::calculate(){
    return right->calculate() * -1;
}

NegateNode::NegateNode(ComponentNode *right) : UnaryNode(right) {}
