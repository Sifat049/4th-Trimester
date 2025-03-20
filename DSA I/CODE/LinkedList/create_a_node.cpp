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
 


int main(){

    Node* head= new Node(10);
    Node* a= new Node(20);
    Node* b= new Node(30);
    Node* c= new Node(40);

    head->next= a;
    head->next->next=b;
    b->next=c;

    // while(head!=NULL)
    // {
    //   cout<<head->val <<endl;
    //   head = head->next;
    // }
    Node* temp=head;
     while(temp!=NULL)
    {
      cout<<temp->val <<endl;
      temp=temp->next;
    }
    // cout<< head->val << endl;
    // cout<< a->val << endl;   // cout<< head->next->val << endl;
    // cout<< b->val << endl;   // cout<< head->next->next->val << endl;
    // cout<< c->val << endl;  
    //   cout<< b->next->val << endl;
    return 0;
}