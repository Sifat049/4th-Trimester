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
// void insert_tail(Node*&head, int v )
// {
//     Node* newNode= new Node(v);
//     if(head == NULL)
//     {
//         head = newNode;
//         return;
//     }
//     Node* temp =head;
//     while (temp->next!=NULL)
//     {
//         temp= temp->next;
//     }
//     temp->next=newNode;
    
// }
int occ(Node *head,int num)
{
    int cnt=0;
    Node* temp =head;
    while(temp!=NULL)
    {
        if(temp->val==num)
        {
          cnt++;

        }
        temp=temp->next;
    }
    return cnt;
}

int main(){

    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(00);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    head->next->next->next->next->next = new Node(60);
   // Node* head=NULL;
//      Node* head=NULL;
//    int v;
//    cin>>v;
//    insert_tail(head,v);
 

          int num=1;
          cout<< occ(head,num);

    return 0;
}