//
// Created by xintong cheng on 2018-04-29.
//

#ifndef EXPRESSIONTREE_MULTIPLYNODE_H
#define EXPRESSIONTREE_MULTIPLYNODE_H


#include "ComponentNode.h"

class MultiplyNode : public ComponentNode {
public:
    MultiplyNode();
    virtual ~MultiplyNode();
    MultiplyNode(ComponentNode *l, ComponentNode *r);
    double calculate();

protected:
    ComponentNode *left;
    ComponentNode *right;

};


#endif //EXPRESSIONTREE_MULTIPLYNODE_H
