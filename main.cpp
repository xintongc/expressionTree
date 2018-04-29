#include <iostream>
#include "ComponentNode.h"
#include "AddNode.h"
#include "LeafNode.h"
#include "NegateNode.h"
#include "MultiplyNode.h"


using namespace std;

int main() {

    ComponentNode *leaf5 = new LeafNode(5);
    ComponentNode *leaf4 = new LeafNode(4);
    ComponentNode *leaf3 = new LeafNode(3);

    ComponentNode *add = new AddNode(leaf3,leaf4);
    ComponentNode *negate = new NegateNode(leaf5);
    ComponentNode *Mul = new MultiplyNode(add,negate);

    int result = Mul->calculate();
    cout << result;

    return 0;
}