//
// Created by xintong cheng on 2018-04-29.
//

#ifndef EXPRESSIONTREE_COMPONENTNODE_H
#define EXPRESSIONTREE_COMPONENTNODE_H



class ComponentNode  {
public:
    virtual double calculate() = 0;
    virtual ~ComponentNode(){};
};


#endif //EXPRESSIONTREE_COMPONENTNODE_H
