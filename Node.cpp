#include "Node.h"

Node::Node(float key) {
    this->key = key;
}

Node *Node::getLeft() const {
    return left;
}

void Node::setLeft(Node *left) {
    Node::left = left;
}

Node *Node::getRight() const {
    return right;
}

void Node::setRight(Node *right) {
    Node::right = right;
}

Node *Node::getParent() const {
    return parent;
}

void Node::setParent(Node *parent) {
    Node::parent = parent;
}

float Node::getKey() const {
    return key;
}

void Node::setKey(float key) {
    Node::key = key;
}

