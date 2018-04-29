//
// Created by xintong cheng on 2018-04-29.
//

#ifndef EXPRESSIONTREE_DIVIDENODE_H
#define EXPRESSIONTREE_DIVIDENODE_H


#include "ComponentNode.h"
#include "BinaryNode.h"

class DivideNode : public BinaryNode {
public:
    DivideNode(ComponentNode *left, ComponentNode *right);

    double calculate();
    virtual ~DivideNode();

};


#endif //EXPRESSIONTREE_DIVIDENODE_H
