/*
#include<bits/stdc++.h>
using namespace std;

class Node
{
   public:
   int val;
   Node* next;

   Node(int val)
   {
    this->val=val;
    this->next=NULL;
   }
};  
void input(Node*&head, int v )
{
    Node* newNode= new Node(v);
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    Node* temp =head;
    while (temp->next!=NULL)
    {
        temp= temp->next;
    }
    temp->next=newNode;
    
}

void print( Node *&head)
{
     Node* temp=head;
     while(temp!=NULL)
    {
      cout<<temp->val <<endl;
      temp=temp->next;
    }
}
int main(){
Node* head=NULL;
    while(true)

{
    cout<<"INPUT :";
    int v;
    cin >>v;
   
        int val;
        cin>> val;
        input(head,v);
    
    
    print(head);
}
//   int length=getSize(arr);

    return 0;
}
*//*
#include<bits/stdc++.h>

using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node() {
        this->data = 0;
        this->next = nullptr;
    }
    Node(int val) {
        this->data = val;
        this->next = nullptr;
    }
    Node(int val, Node *node) {
        this->data = val;
        this->next = node;
    }
};

class LinkedList {
    public:
    Node *head = nullptr;
    LinkedList() {
        this->head = nullptr;
    }
   void insertAtHead(int val) {
        Node *newHead = new Node(val);
        newHead->next = head;
        this->head = newHead;
    }/*
    void insertAtTail(int val) {
        Node *newNode = new Node(val);
        Node *curr = this->head;
        while (curr->next) {
            curr = curr->next;
        }
        curr->next = newNode;
    }
    void insertAfter(int x, int y) {
        Node *curr = head;
        while (curr != nullptr and curr->data != x) {
            curr = curr->next;
        }
        if (curr == nullptr) {
            cout << x << " not found\n";
        }
        else {
            Node *newNode = new Node(y);
            newNode->next = curr->next;
            curr->next = newNode;
        }
    }
    void deleteHead() {
        if (head == nullptr)
            return;
        Node *temp = head;
        head = head->next;
        free(temp);
    }
    void deleteTail() {
        Node *curr = head;
        while (curr->next->next != nullptr) {
            curr = curr->next;
        }
        Node *temp = curr->next;
        curr->next = nullptr;
        free(temp);
    }*/ /*
    int getSize() {
        int cnt = 0;
        Node *curr = head;
        while (curr) {
            cnt++;
            curr = curr->next;
        }
        cout << "SIZE :";
        cout<<cnt<<endl;
        return cnt;
       
    }
    void printList() {
        Node *curr = this->head;
        while (curr) {
            cout << curr->data << "->";
            curr = curr->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    LinkedList list = LinkedList();
    list.insertAtHead(5);
    list.insertAtHead(7);
    list.insertAtHead(9);
    list.insertAtHead(11);
    list.insertAtHead(13);
    list.insertAtHead(15);
    list.insertAtHead(17);
   // list.insertAtTail(19);
   // list.insertAfter(11, 12);
   // list.insertAfter(20, 12);
  //  list.deleteHead();
  //  list.deleteTail();
      list.getSize();

    list.printList();
    return 0;
}



#include<bits/stdc++.h>

using namespace std;

class Node
{
   public:
   int val;
   Node* next;

   Node(int val)
   {
    this->val=val;
    this->next=NULL;
   }
};  
    

int getSize(Node* head,int num)
{
    int cnt=0;
    Node* temp=head;
    while(temp!=nullptr)
    {
        if(temp->val==num)
        cnt++;
        temp=temp->next;
    }
    return cnt;

}

int getMiddle(Node* head) {
    Node* slow = head;
    Node* fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        fast = fast->next->next;
        slow = slow->next;
        
    }
   // cout<< slow->val;
    return slow->val;
}
Node* reverse(Node* head)
{
    Node* cur=head;
    Node* prev=nullptr;
    while(cur!=nullptr)
    {
        Node* nextemp=cur->next;
        cur->next=prev;
        prev=cur;
        cur=nextemp;

    }
    return prev;
}

int main()
{
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(110);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    head->next->next->next->next->next = new Node(60);
   // int num;
  //  cin>>num;
   // cout<<getSize(head,num)<<endl;
    cout<<getMiddle(head)<<endl;
    head=reverse(head);
    cout<<cur->val;
    
    return 0;
}*/

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
