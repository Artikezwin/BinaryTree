#include "Tree.h"
#include <iostream>
using namespace std;

Tree::Tree(){

}

Tree::~Tree() {

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

void Tree::output() {
    Node *pointer = this->root;
    while(pointer->left != nullptr){
        pointer = pointer->left;
    }

    while(pointer != root){
        cout<<pointer->getKey()<<" ";
        pointer = pointer->parent;
        if(pointer->right != nullptr && pointer!=root){
            pointer = pointer->right;
            while(pointer->left != nullptr){
                pointer = pointer->left;
            }
        }
    }

}
