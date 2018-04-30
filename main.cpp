#include <iostream>
#include <stack>
#include "ComponentNode.h"
#include "AddNode.h"
#include "LeafNode.h"
#include "NegateNode.h"
#include "MultiplyNode.h"
#include "DivideNode.h"


using namespace std;

int convertNum(char c){
    switch (c){
        case '0': return 0;
        case '1': return 1;
        case '2': return 2;
        case '3': return 3;
        case '4': return 4;
        case '5': return 5;
        case '6': return 6;
        case '7': return 7;
        case '8': return 8;
        case '9': return 9;
        default: return 0;
    }
}

int opePriority(char c) {
    switch (c) {
        case '*':
        case '/':
            return 2;
        case '+':
        case '-':
            return 1;
        default:
            return 0;
    }
}

int cal2Num(int num1, char c, int num2 ){
    switch (c){
        case '*': return num1 * num2;
        case '/': return num1 / num2;
        case '+': return num1 + num2;
        case '-': return num1 - num2;
        default:
            return 0;
    }

}

int calculate(string string){
    string = string + "$";
    stack<int> num;
    stack<char> ope;
    for (int i = 0; i < string.length(); i+=2)  {
        char current1 = string[i];
        num.push(convertNum(current1));

        char current2 = string[i + 1];

        while (true){
            if (ope.empty()){
                break;
            }
            if (opePriority(current2) > opePriority(ope.top())){
                break;
            }

            int num2 = num.top();
            num.pop();
            int num1 = num.top();
            num.pop();
            int result = cal2Num(num1,ope.top(),num2);
            ope.pop();
            num.push(result);
        }
        ope.push(current2);
    }
    return num.top();
}




int main() {

//    ComponentNode *leaf5 = new LeafNode(5);
//    ComponentNode *leaf4 = new LeafNode(4);
//    ComponentNode *leaf3 = new LeafNode(3);
//
//    ComponentNode *add = new AddNode(leaf3,leaf4);
//    ComponentNode *negate = new NegateNode(leaf5);
//    ComponentNode *mul = new MultiplyNode(negate,add);
//
//    double result = mul->calculate();
//    cout << result << endl;
//
//    ComponentNode *leaf1 = new LeafNode(1);
//    ComponentNode *leaf2 = new LeafNode(2);
// //   ComponentNode * div = new DivideNode(negate,add);
//    ComponentNode * div = new DivideNode(leaf2,leaf1);
//    double result2 = div->calculate();
//    cout << result2;
//
//    delete leaf5;
//    delete leaf4;
//    delete leaf3;
//    delete add;
//    delete negate;
//    delete mul;
//    delete div;


    cout << calculate("3+2*5-6+5*3");
    cout << calculate("1-3*5-3");







    return 0;
}