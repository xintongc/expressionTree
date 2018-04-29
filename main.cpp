#include <iostream>
#include "ComponentNode.h"
#include "AddNode.h"
#include "LeafNode.h"


using namespace std;

int main() {

    ComponentNode *leaf1 = new LeafNode(1);
    ComponentNode *leaf2 = new LeafNode(2);
    ComponentNode *leaf3 = new LeafNode(3);

    ComponentNode *componentNode2 = new AddNode(leaf1,leaf2);
    ComponentNode *componentNode1 = new AddNode(componentNode2,leaf3);

    int result = componentNode1->calculate();
    cout << result;

    return 0;
}