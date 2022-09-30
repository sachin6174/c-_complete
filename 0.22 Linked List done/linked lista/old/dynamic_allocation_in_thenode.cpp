#include <iostream>
using namespace std;
// template<class T>
class node {
    public:
    int data;
    node *next;


};

void print_ll(node *head){

cout<<"address of head(1st ) node : "<<int(head)<<" ";

cout<<(*head).data<<" ";
cout<<"address of 2nd node : "<<(*head).next<<" ";

cout<<(*((*head).next)).data<<"  ";




}

int main()
{
    node *e1=new node;
    (*e1).data=10;
    node *head=&(*e1);


    node *e2= new node;
    (*e2).data=20;//e2->data=20

    (*e1).next=&(*e2);
    // e1-> next=e2;//this is also true

    (*e2).next=NULL;


    node*e3= new node;
    

    print_ll(head);
    return 0;
}