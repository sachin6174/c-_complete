#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;
    
    };    

//printing all the elements of linked lists using function:
// void print_elements( ){
//     for (int  i = 0;; i++)
//     {
//       if (p==NULL)
//     }
    
// } 

void printll(node *head){
    // print all the linked list
cout<<head<<" "<<(*head).data<<" "<<(*head).next<< " "<< (*((*head).next)).data<<" "<<(*((*head).next)).next;

}


int main()
{
    node e1;
    node*head=&e1;
    // cout<<*head;//wrong
    e1.data=4;
    // cout<<sizeof(e1)<<endl;

    // cout<<&e1<<endl;
    // cout<<&e1.data<<endl;
    // cout<<&e1.p<<endl;
    node e2;
    e2.data=7;

    e1.next=&e2;

    node e3;
    
    e2.next=&e3;
    e3.data=12;

    node e4;
    e4.data=122;
    e3.next=&e4;
    e4.next=NULL;   


    printll(head);
    // cout<<*p;//wrong
    // cout<<(*p);//wrong
    // cout<<(*p).data;//wrong
    // cout<<*(e1.p).data;//wrong
    // cout<<e1.(*p).data;//wrong.
    return 0;
}