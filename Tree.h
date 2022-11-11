#ifndef PR4_1_TREE_H
#define PR4_1_TREE_H

#include "Node.h"

struct Tree {
    Tree();
    void insert(float key);
    void average(); /**Среднее Арифметическое*/
    void search(float key);
    void output();
    ~Tree();

private:
    Node *root = nullptr;
};


#endif //PR4_1_TREE_H
