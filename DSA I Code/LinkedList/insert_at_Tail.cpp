
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
void insert_at_Tail(Node*&head, int v )
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
// int getSize(Node *&head)
// {
//     int cnt=0;
//     Node* temp= head;
//     while(temp)
//     {
//         cnt++;
//         temp =temp->next;
//     }
//     return cnt;

// }

void print_linked_list(Node* head)
{
    cout<< "Your Linked List: ";
    Node* temp=head;
     while(temp !=NULL)
    {
      cout<<temp->val <<" ";
      temp=temp->next;
    }
    cout << endl;
}
int main(){

    Node*head =NULL;
    while(true)
    {
        cout<< "Option 1: Insert at Tail"<<endl;
        cout<< "Option 2: Print Linked List"<<endl;
        cout<< "Option 3: Break"<<endl;
    int op;
    cin>>op;
    if(op == 1)
    {
        cout<< "Please enter value: ";
        int v;
        cin>> v;
        insert_at_Tail(head,v);
    }
    else if(op==2)
    {
    print_linked_list(head);
  
    }
    else if(op==3)
    {
       
        break;
    }
    }
    

    return 0;
}
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
void insert_tail(Node *&head,int v){
    Node* newNode= new Node(v);
    if(head == NULL){
        head= newNode;
        return;
    }
    Node* temp= head;
    while (temp->next!= NULL)
    {
       temp= temp->next;
    }
    temp->next=newNode;

}
void print(Node* head)
{
     Node* temp=head;
     while(temp!=NULL)
     {
       cout<< temp->val<< " ";
       temp=temp->next;
     }
     cout<<endl;
}


int main(){
     
   // Node* head = new Node()
   Node* head=NULL;
   int v;
   cin>>v;
   insert_tail(head,v);
   print(head);
    
    return 0;
}
*/