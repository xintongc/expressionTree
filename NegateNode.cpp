//
// Created by xintong cheng on 2018-04-29.
//

#include "NegateNode.h"

NegateNode::NegateNode() {}

NegateNode::~NegateNode() {
    delete child;
}

NegateNode::NegateNode(ComponentNode *c){
    child = c;
}

double NegateNode::calculate(){
    return child->calculate() * -1;
}
