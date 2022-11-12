#include "Tree.h"
#include <iostream>
using namespace std;

Tree::Tree(){

}

Tree::~Tree() {

}

Node *Tree::getRoot() const {
    return root;
}

void Tree::setRoot(Node *root) {
    Tree::root = root;
}

void Tree::insert(float key) {
    if(this->root == nullptr){
        this->root = new Node(key);
        cout<<root->getKey()<<" - root\n";
        return;
    }
    Node *pointer = this->root;
    while(pointer != nullptr){
        if(pointer->getKey() >= key && pointer->left == nullptr){
            pointer->left = new Node(key);
            pointer->left->parent = pointer;
            cout<<pointer->left->getKey()<<" - left\n";
            cout<<pointer->left->parent->getKey()<<" - Parent of left\n";
            return;
        }

        else if(pointer->getKey() >= key && pointer->left != nullptr){
            pointer = pointer->left;
        }

        else if(key > pointer->getKey() && pointer->right == nullptr){
            pointer->right = new Node(key);
            pointer->right->parent = pointer;
            cout<<pointer->right->getKey()<<" - right\n";
            cout<<pointer->right->parent->getKey()<<" - Parent of right\n";
            return;
        }

        else if(key > pointer->getKey() && pointer->right != nullptr){
            pointer = pointer->right;
        }
    }
}

void Tree::output(Node *root) {
    if(root == nullptr){ return; }
    output(root->left);
    cout<<root->getKey()<<" ";
    output(root->right);
}

float sm=0, kol=0;
void Tree::average(Node *root) {
    if(root == nullptr){ return; }
    average(root->left);
    sm = sm + root->getKey();
    kol++;
    average(root->right);
    if(root->parent == nullptr){ cout<<"Среднее арифметическое всех узлов - "<<sm/kol; }
}


int Tree::SearchObj(Node *root, float key) {
    if(root == nullptr){ return 0; }
    else if(root->key == key){ return kol; }
    SearchObj(root->left, key);

    SearchObj(root->right, key);
}

int s = 0;
int Tree::length(float key) {
    if(this->root == nullptr){ return 0; }
    Node *pointer = root;
    while(pointer->getKey() != key){
        if(pointer->getKey() > key){
            pointer = pointer->left;
            s++;
        }
        else if(pointer->getKey() < key){
            pointer = pointer->right;
            s++;
        }
    }
    delete pointer;
    return s;
}



