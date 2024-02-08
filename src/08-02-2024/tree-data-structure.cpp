#include <iostream>
using namespace std;

// Tree data structures - nodes
// This is basically the concept of "Folders"
// Data can be organized better and simpler with the usage of tree data structures.

// A singular entity is called a NODE.
// Main node (node that does not have a PARENT node) is called a ROOT NODE. 
// A leaf node is a node that does NOT have children.
// Sub-nodes are CHILD NODES.

// Binary tree is a tree that cannot have more than 2 children. 1 or 2, binary. You get it? :D

// When the ROOT node is created, it does not have any children. Therefore,
// the children nodes have value "NULL".

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int data) {
    Node* newNode = new Node();
    newNode -> data = data;
    newNode -> left = newNode -> right = nullptr;
    return newNode;
}

int main() {
    // Level 1
    Node* root = createNode(1);

    // Level 2
    root -> left = createNode(2);
    root -> right = createNode(3);

    // Level 3
    root -> left -> left = createNode(4);
    root -> left -> right = createNode(5);
    root -> right -> left = createNode(6);
    root -> right -> right = createNode(7);

    // Level 4
    root -> left -> right -> left = createNode(9);
    root -> right -> right -> left = createNode(15);

    return 0;
}