//
// Created by xintong cheng on 2018-04-29.
//

#ifndef EXPRESSIONTREE_ADDNODE_H
#define EXPRESSIONTREE_ADDNODE_H


#include "ComponentNode.h"

class AddNode : public ComponentNode {

public:
    AddNode(ComponentNode *l, ComponentNode *r);
    virtual ~AddNode();
    double calculate();

protected:
    ComponentNode *left;
    ComponentNode *right;

};


#endif //EXPRESSIONTREE_ADDNODE_H
