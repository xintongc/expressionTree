//
// Created by xintong cheng on 2018-04-29.
//

#ifndef EXPRESSIONTREE_ADDNODE_H
#define EXPRESSIONTREE_ADDNODE_H


#include "ComponentNode.h"
#include "BinaryNode.h"

class AddNode : public BinaryNode {

public:
    virtual ~AddNode();
    double calculate();

    AddNode(ComponentNode *right, ComponentNode *left);


};


#endif //EXPRESSIONTREE_ADDNODE_H
