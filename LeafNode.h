//
// Created by xintong cheng on 2018-04-29.
//

#ifndef EXPRESSIONTREE_LEAFNODE_H
#define EXPRESSIONTREE_LEAFNODE_H


#include "ComponentNode.h"

class LeafNode : public ComponentNode{
protected:
    int number;
public:
    LeafNode(int n);
    virtual ~LeafNode();
    double calculate();

};


#endif //EXPRESSIONTREE_LEAFNODE_H
