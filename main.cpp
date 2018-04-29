#include <iostream>
#include "ComponentNode.h"
#include "AddNode.h"
#include "LeafNode.h"
#include "NegateNode.h"
#include "MultiplyNode.h"
#include "DivideNode.h"


using namespace std;

int main() {

    ComponentNode *leaf5 = new LeafNode(5);
    ComponentNode *leaf4 = new LeafNode(4);
    ComponentNode *leaf3 = new LeafNode(3);

    ComponentNode *add = new AddNode(leaf3,leaf4);
    ComponentNode *negate = new NegateNode(leaf5);
    ComponentNode *mul = new MultiplyNode(negate,add);

    double result = mul->calculate();
    cout << result << endl;

    ComponentNode * div = new DivideNode(negate,add);
    double result2 = div->calculate();
    cout << result2;

    delete leaf5;
    delete leaf4;
    delete leaf3;
    delete add;
    delete negate;
    delete mul;
    delete div;

    return 0;
}