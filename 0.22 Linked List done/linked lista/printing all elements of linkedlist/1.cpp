#include <iostream>
using namespace std;

class node {
    public:
    int data;
    node * next;

    node(int data){
        this->data=data;
    }
};

void print (node* head)
{
    cout<<head<<endl;
    
    for (int  i = 0; head!=NULL; i++)
    {
    cout<<(*head).data<<" ";
    head=(*head).next;

    }
    cout<<endl;
    cout<<head<<endl;//head khoo dia yara
    

}

int main()
{
    node e1(5);
    node e2(10);
    node*head=&e1;
    (*head).next=&e2;
   (*((*head).next)).next=NULL;


    print (head);
    
    return 0;
}