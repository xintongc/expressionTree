//
// Created by xintong cheng on 2018-04-29.
//

#ifndef EXPRESSIONTREE_DIVIDENODE_H
#define EXPRESSIONTREE_DIVIDENODE_H


#include "ComponentNode.h"

class DivideNode : public ComponentNode {
public:
    DivideNode();
    DivideNode(ComponentNode *l, ComponentNode *r);
    double calculate();
    virtual ~DivideNode();

protected:
    ComponentNode *left;
    ComponentNode *right;
};


#endif //EXPRESSIONTREE_DIVIDENODE_H
