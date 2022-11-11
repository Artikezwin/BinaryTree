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
    while(this->root != nullptr){
        if(root->getKey() >= key && root->left == nullptr){
            root->left = new Node(key);
            cout<<root->left->getKey()<<" - left\n";
            return;
        }

        else if(root->getKey() >= key && root->left != nullptr){
            root = root->left;
        }

        else if(key > root->getKey() && root->right == nullptr){
            root->right = new Node(key);
            cout<<root->right->getKey()<<" - right\n";
            return;
        }

        else if(key > root->getKey() && root->right != nullptr){
            root = root->right;
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
        if(pointer->right != nullptr){
            pointer = pointer->right;
            while(pointer->left != nullptr){
                pointer = pointer->left;
            }
        }
    }

}
