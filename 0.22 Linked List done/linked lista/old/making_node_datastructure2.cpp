#include <iostream>
using namespace std;

class node{
 
public:
int data;
node *next;
node(int data){

    this->data=data;
    node*next=NULL;
}

};


void print(node*head){

}

int main()
{
    
    node n1(5);
    node n2(7);
    node n3(6);
    node n4(0);
    node n5(1);


    node *head=&n1;
    n1.next=&n2;
    n2.next=&n3;
    n3.next=&n4;
    n4.next=&n5;

    
    return 0;
}