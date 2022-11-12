#include <iostream>
#include "Node.h"
#include "Tree.h"
#include <string>
using namespace std;

void append(Tree &tree){
    tree.insert(13.5);
    tree.insert(2.5);
    tree.insert(15.5);
    tree.insert(1.5);
    tree.insert(3.5);
    tree.insert(25.5);
    tree.insert(12.5);
    tree.insert(14.7);
    tree.insert(0.99);
    tree.insert(1.62);
}

int main() {
    system("chcp 65001");
    Tree tree = Tree();
    append(tree);
    tree.output(tree.getRoot());
    cout<<"\n";
    tree.average(tree.getRoot());
    cout<<"\n";
    cout<<tree.getRoot()->getKey();
    cout<<"\n";
    cout<<"Длина от корня до 15.5 - "<<tree.length(15.5);
    cout<<"\n";
    cout<<"Длина от корня до 3.5 - "<<tree.length(3.5);
    cout<<"\n";
    cout<<"Длина от корня до 0.99 - "<<tree.length(0.99);
    return 0;
}
