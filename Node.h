#ifndef PR4_1_NODE_H
#define PR4_1_NODE_H

/**
 * Класс Узел
 * @author Слуцкий Артём
 * @version 1.0
 */

class Tree;

class Node {
public:
    friend class Tree;
    Node(float key);

    Node *getLeft() const;

    void setLeft(Node *left);

    Node *getRight() const;

    void setRight(Node *right);

    Node *getParent() const;

    void setParent(Node *parent);

    float getKey() const;

    void setKey(float key);

private:
    float key;
    Node *left = nullptr;
    Node *right = nullptr;
    Node *parent = nullptr;
};


#endif //PR4_1_NODE_H
