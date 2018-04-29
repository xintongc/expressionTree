//
// Created by xintong cheng on 2018-04-29.
//

#ifndef EXPRESSIONTREE_UNARYNODE_H
#define EXPRESSIONTREE_UNARYNODE_H


#include "ComponentNode.h"

class UnaryNode : public ComponentNode{
protected:
    ComponentNode *right;

public:
    UnaryNode(ComponentNode *right);

    virtual ~UnaryNode();
};


#endif //EXPRESSIONTREE_UNARYNODE_H
