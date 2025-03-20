#include<bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node* parent;
    Node* left;
    Node* right;
    Node(int data)
    {
        this->data=data;
        parent=NULL;
        left=NULL;
        right=NULL;

    }
    Node (int data, Node* p)
    {
        this->data = data;
        parent = p;
        left = nullptr;
        right = nullptr;
    }
};
Node *root;
Node* preorder(Node* roo)
{
  //  string t;
    if(roo!=NULL)
     cout<<root->data<<"->";
    {
        if(roo->left!=NULL) preorder(roo->left);
        if(roo->right!=NULL) preorder(roo->right);
    }
   // return t;
}

int main()
{
    root = new Node(8);
    root->left = new Node(9, root);
    root->right = new Node(1, root);
    root->left->left = new Node(6, root->left);
    root->right->left = new Node(8, root->right);
    root->left->left->right = new Node(5, root->left->left);
    //cout << depth(root->left->left) << endl;
    //cout << getHeight(root) << endl;
    //cout<< preorder(root) << endl;
    cout<< preorder(root) <<endl;
   // cout << "Hello world!" << endl;
    return 0;
}
