#include <iostream>
using namespace std;

class node {

public:
int data;
node *next;

//setter
node(int data){

this->data=data;

}

};

void display(node *head)
{
    for (int i=0; head!=NULL   ;i++   )
    {
    cout<<(*head).data<<" ";
    head=((*head).next);

    }
}
int main()
{
    node e1(10);
    node e2(20);
    node e3(5);
    node *head= &e1;
    e1.next=&e2;
    e2.next=&e3;
    e3.next=NULL;


    display(head);

    
    return 0;
}