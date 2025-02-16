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
Node* deleteEvens(Node* head) {
  
    while (head != nullptr && head->val % 2 == 0) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

   
    if (head == nullptr) return nullptr;

    Node* current = head;
    while (current->next != nullptr) {
        if (current->next->val % 2 == 0) {
            Node* temp = current->next;
            current->next = current->next->next;
            delete temp;
        } else {
            current = current->next;
        }
    }

    return head;
}

void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->val;
        if (current->next != nullptr) cout << "->";
        current = current->next;
    }
    cout << endl;
}

int main(){

    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(0);
    head->next->next->next = new Node(3);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(60);
    head=deleteEvens(head);
    printList(head);

    return 0;
}