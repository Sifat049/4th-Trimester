#include <iostream>

using namespace std;

struct list
{
    int data;
    list *next;
};
typedef struct list node;
void display(node *start)
{
    node*temp;
    temp = start;
    while(temp!= NULL)
    {
        cout << temp->data <<" ";
        temp = temp-> next;
    }

}

int main()
{
    node *start, *temp;
    start =new node();
    start->data =10;

    temp =new node();
    temp->data=20;
    start->next=temp;

    temp=new node();
    temp->data=30;
    start->next->next=temp;

    temp =new node();
    temp->data=40;
    start->next->next->next=temp;






    temp->next= NULL;
    display(start);

    /* node *a,*b,*c;
      a = new node();
      a->data =10;
      b = new node();
      b->data =20;
      c = new node();
      c->data =30;
      a->next= b;
      a->next->next= c;
      c->next = NULL;


      cout << a->data <<" " << b->next->data <<" "<< b->next->next->data << endl;
      cout << a->next->data << endl;
      cout << b->data << endl;
      cout << c->data << endl;
    */
    return 0;
}
