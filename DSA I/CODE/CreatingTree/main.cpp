/*

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
    Node(int data, Node* p)
    {
        this->data=data;
        parent=p;
        left=NULL;
        right=NULL;
    }
};

Node* buildTree(Node *root)
{
    cout<<"Enter the Data:"<<endl;
    int data;
    cin>>data;
    root =new Node(data);
    if(data ==-1)
    {
        return NULL;
    }

    cout<<"Enter Left data "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter right data "<<data<<endl;
    root->right=buildTree(root->right);
    return root;
}

Node* root;

int Height(Node* root)
{
    if(root==nullptr)
        return 0;
    if(root->left == nullptr  and  root->right == nullptr)
        return 0;

    int leftHeight=Height(root->left);
    int rightHeight=Height(root->right);

    return 1+ max(leftHeight,rightHeight);

}

int Depth(Node* root)
{
    if(root->parent==nullptr) return 0;
    return 1+ Depth(root->parent);
}

void preorder(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<< "->";
    preorder(root->left);
    preorder(root->right);

}

void inorder(Node* root)
{
    if(root==NULL) return ;
    inorder(root->left);
    cout<<root->data<<"->";
    inorder(root->right);
}
void postorder(Node* root)
{
    if(root==NULL) return ;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<"->";

}
class BST
{
public:
    Node* root;
    BST()
    {
        root = nullptr;
    }
    Node* insert(Node* r, int data)
    {
        if (r == nullptr)
        {
            Node* newNode = new Node(data);
            r = newNode;
        }
        else if (data < r->data)
            r->left = insert(r->left, data);
        else
            r->right = insert(r->right, data);
        return r;
    }
    Node* insert(int data)
    {
        root = insert(root, data);
        return root;
    }
    string inorderTr(Node* root)
    {
        string t;
        if(root==NULL) ;
        inorder(root->left);
        cout<<root->data<<"->";
        inorder(root->right);
        return t ;
    }
    string inorderTr()
    {
        return inorderTr(root);
    }

    bool search(Node* r, int data)
    {
        if (not r)
            return false;
        if (r->data == data)
            return true;
        if (data < r->data)
            return search(r->left, data);
        return search(r->right, data);
    }
    bool search(int data)
    {
        return search(root, data);
    }

    Node* deleteNode(Node* r, int data)
    {
        if (r->data == data)
        {

            if (not r->right and not r->left)
                return nullptr;
            if (r->left)
                return r->left;
            return r->right;
        }
        else if (data < r->data)
            r->left = deleteNode(r->left, data);
        else
            r->right = deleteNode(r->right, data);
        return r;
    }
    Node* deleteNode(int data)
    {
        root = deleteNode(data);
        return root;
    }
};
int main()
{
    Node* root=NULL;
    //root= buildTree(root);

    root = new Node(8);
    root->left = new Node(7,root);
    root->right = new Node(9,root);
    root->left->left = new Node(5,root);
    root->right->right = new Node(19,root);

    cout<<"Inorder:";
    inorder(root);
    cout<<endl;

    cout<<"Preorder:";
    preorder(root);
    cout<<endl;

    cout<<"Postorder:";
    postorder(root);
    cout<<endl;

    cout << "Height: "<<Height(root) << endl;
    cout <<"Depth: "<<Depth(root->left)<<endl;

    BST bst=BST();
    bst.insert(22);
    bst.insert(15);
    bst.insert(23);
    bst.insert(10);
    bst.insert(12);
    bst.insert(15);
    bst.insert(23);
    bst.insert(10);
    cout<<"Inorder Traversal:  ";
    // bst.inorderTr();
//bst.deleteNode(15);
    bst.search(root,15);
    cout<<bst.inorderTr()<<endl;
    return 0;
}*/

#include <bits\stdc++.h>

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
        parent=nullptr;
        left=nullptr;
        right=nullptr;

    }
    Node(Node* p,int data)
    {
        parent=p;
        this->data=data;
        left=nullptr;
        right=nullptr;

    }
};
Node* root;

Node* buildTree(Node *root)
{
    cout<<"Enter the Data:"<<endl;
    int data;
    cin>>data;
    root =new Node(data);
    if(data ==-1)
    {
        return NULL;
    }

    cout<<"Enter Left data "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter right data "<<data<<endl;
    root->right=buildTree(root->right);
    return root;
}
int getheight(Node* r)
{

    if(r==nullptr) return 0;
    if(r->left==nullptr && r->right==nullptr)
        return 0;


    int left=getheight(r->left);
    int right=getheight(r->right);

    return 1+max(left,right);

}
int getdepth(Node* r)
{
    if(r->parent==nullptr)
        return 0;
    return 1+getdepth(r->parent);
}

void preorder(Node* r)
{
    cout<<r->data<<"->";
    if(r->left !=nullptr)
        preorder(r->left);
    if(r->right !=nullptr)
        preorder(r->right);

}
void inorder(Node* r)
{

    if(r->left !=nullptr)
        preorder(r->left);
    cout<<r->data<<"->";
    if(r->right !=nullptr)
        preorder(r->right);

}
void postorder(Node* r)
{

    if(r->left !=nullptr)
        preorder(r->left);
    if(r->right !=nullptr)
        preorder(r->right);
    cout<<r->data<<"->";

}
void bst(Node* r,int data)
{
    if(r==nullptr) cout<<"notfound";
    if(r->data==data) cout<<"found";
    if(data>r->data)
        bst(r->right,data);
    if(data<r->data)
        bst( r->left,data);


}

Node* insertbst(Node* r,int data)
{
    if(r==nullptr)
    {
        Node* newnode=new Node(data);
        return newnode;
    }
    if(r->data>data)
        r->left=insertbst(r->left,data);
    else if(r->data<data)
        r->right=insertbst(r->right,data);

    return r;
}

Node* deletenode(Node* r,int data)
{
    if(r->data==data)
    {
        if(not r->left && not r->right)
            return nullptr;
        if(r->left)
            return r->left;
        return r->right;
    }
    else if(r->data>data)
        r->left=  deletenode(r->left, data);
    else
        r->right=deletenode(r->right, data);

    return r;
}
int main()
{
    Node* root=nullptr;
    // root=buildTree(root);
    root=new Node(10);
    root->left = new Node( root,7);
    root->right = new Node(root,11);
    root->left->left = new Node(root->left,6);
    root->right->left = new Node(root->right,10);

    insertbst(root,12);
    deletenode(root,7);


    cout<<"Height: "<<getheight(root)<<endl;
    cout<<"Depth: "<<getdepth(root->left->left)<<endl;
    cout<<"Preorder: ";
    preorder(root);
    cout <<"NULL"<<endl;
    cout<<"Inorder: ";
    inorder(root);
    cout<<"NULL"<<endl;
    cout<<"Postorder: ";
    postorder(root);
    cout<<"NULL"<<endl;

    bst(root,12);



    return 0;
}
