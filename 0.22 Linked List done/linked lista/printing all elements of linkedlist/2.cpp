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
    node* temp=head;
    cout<<head<<endl;
    
    for (int  i = 0; temp!=NULL; i++)
    {
    cout<<(*temp).data<<" ";
    temp=(*temp).next;

    }
    cout<<endl;
    //temp update hoga ab head update nahi hoga
    cout<<head<<endl;//head nahi khoya

   /*
    for (int  i = 0; temp!=NULL; i++)
    {
    cout<<(*temp).data<<" ";
    temp=(*temp).next;

    }
    */// temp ka sath pass kia temp to null ho chuka hoga to isme ghushega hi nahi

for (int  i = 0; head!=NULL; i++)
    {
    cout<<(*head).data<<" ";
    head=(*head).next;
}// ab head bhi update ho kar null ho chuka hai

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