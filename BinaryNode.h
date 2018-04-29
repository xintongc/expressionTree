//
// Created by xintong cheng on 2018-04-29.
//

#ifndef EXPRESSIONTREE_BINARYNODE_H
#define EXPRESSIONTREE_BINARYNODE_H


#include "UnaryNode.h"

class BinaryNode : public UnaryNode {

protected:
    ComponentNode *left;

public:
    BinaryNode(ComponentNode *right, ComponentNode *left);

    virtual ~BinaryNode();

};


#endif //EXPRESSIONTREE_BINARYNODE_H
