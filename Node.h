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

    Node *getRight() const;

    Node *getParent() const;

    float getKey() const;


private:
    float key;
    Node *left = nullptr;
    Node *right = nullptr;
    Node *parent = nullptr;
};


#endif //PR4_1_NODE_H
