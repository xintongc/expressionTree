//
// Created by xintong cheng on 2018-04-29.
//

#ifndef EXPRESSIONTREE_MULTIPLYNODE_H
#define EXPRESSIONTREE_MULTIPLYNODE_H


#include "ComponentNode.h"
#include "BinaryNode.h"

class MultiplyNode : public BinaryNode {
public:
    virtual ~MultiplyNode();
    double calculate();

    MultiplyNode(ComponentNode *right, ComponentNode *left);


};


#endif //EXPRESSIONTREE_MULTIPLYNODE_H
