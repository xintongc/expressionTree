//
// Created by xintong cheng on 2018-04-29.
//

#ifndef EXPRESSIONTREE_NEGATENODE_H
#define EXPRESSIONTREE_NEGATENODE_H


#include "ComponentNode.h"

class NegateNode : public ComponentNode {
public:
    NegateNode();

    virtual ~NegateNode();

    NegateNode(ComponentNode *c);
    double calculate();

protected:
    ComponentNode *child;

};


#endif //EXPRESSIONTREE_NEGATENODE_H
