//
// Created by xintong cheng on 2018-04-29.
//

#ifndef EXPRESSIONTREE_NEGATENODE_H
#define EXPRESSIONTREE_NEGATENODE_H


#include "ComponentNode.h"
#include "UnaryNode.h"

class NegateNode : public UnaryNode {
public:
    NegateNode(ComponentNode *right);

    virtual ~NegateNode();

    double calculate();



};


#endif //EXPRESSIONTREE_NEGATENODE_H
