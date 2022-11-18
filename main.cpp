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

void inp(Tree &tree){
    int n=0;
    float a;
    for(int i=0;i<10;i++){
        cin>>a;
        tree.insert(a);
    }
}
/**
 * @mainpage
 */

int main() {
    system("chcp 65001");
    Tree tree = Tree();
    cout<<"Выберете, какой вы хотите ввод\n";
    cout<<"1 - тестовый набор данных, 2 - ввод вручную\n";
    int strelka;
    cin>>strelka;
    switch (strelka) {
        case 1:
            append(tree);
            break;
        case 2:
            inp(tree);
            break;
    }
    tree.output(tree.getRoot());
    cout<<"\n";
    tree.average(tree.getRoot());
    cout<<"\n";
    cout<<"Длина от корня до 15.5 - "<<tree.length(15.5);
    cout<<"\n";
    cout<<"Длина от корня до 0.99 - "<<tree.length(0.99);
    return 0;
}
