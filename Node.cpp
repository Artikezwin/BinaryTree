#include "Node.h"

Node::Node(float key) {
    this->key = key;
}

Node *Node::getLeft() const {
    return left;
}

Node *Node::getRight() const {
    return right;
}

Node *Node::getParent() const {
    return parent;
}

float Node::getKey() const {
    return key;
}

