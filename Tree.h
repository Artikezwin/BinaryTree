#ifndef PR4_1_TREE_H
#define PR4_1_TREE_H

#include "Node.h"

struct Tree {
    Tree();
    void insert(float key);
    void average(Node *root); /**Среднее Арифметическое*/
    int length(float key);
    void output(Node *root); /**Симметричный обход дерева*/
    ~Tree();

    Node *getRoot() const;

    void setRoot(Node *root);

private:
    Node *root = nullptr;
};


#endif //PR4_1_TREE_H
