#include<bits/stdc++.h>

using namespace std;

class Node {
public:
    int data;
    Node *parent;
    Node *left;
    Node *right;
    Node (int data) {
        this->data = data;
        parent = nullptr;
        left = nullptr;
        right = nullptr;
    }
    Node (int data, Node* p) {
        this->data = data;
        parent = p;
        left = nullptr;
        right = nullptr;
    }
};

Node* root;

int getHeight(Node* r) {
    // Base case
    if (r == nullptr)
        return 0;
    if (r->left == nullptr and r->right == nullptr)
        return 0;
    // Recursion
    int leftHeight = getHeight(r->left);
    int rightHeight = getHeight(r->right);
    return 1 + max(leftHeight, rightHeight);
}

int depth(Node *node) {
    // base case
    if (node->parent == nullptr)
        return 0;
    // Recursion
    return 1 + depth(node->parent);
}

string preorderTraversal(Node* r) {
    string traversal;
    traversal = (char)(r->data + '0');
    if (r->left) {
        traversal += "->";
        traversal += preorderTraversal(r->left);
    }
    if (r->right) {
        traversal += "->";
        traversal += preorderTraversal(r->right);
    }
    return traversal;
}

int main () {
    root = new Node(8);
    root->left = new Node(9, root);
    root->right = new Node(1, root);
    root->left->left = new Node(6, root->left);
    root->right->left = new Node(8, root->right);
    root->left->left->right = new Node(5, root->left->left);
    //cout << depth(root->left->left) << endl;
    //cout << getHeight(root) << endl;
    cout << preorderTraversal(root) << endl;
}
