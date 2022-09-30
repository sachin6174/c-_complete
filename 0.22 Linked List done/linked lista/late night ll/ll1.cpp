#include <iostream>
using namespace std;


class node{
    public:
int data;
node*  next;
};

int main()
{
    node e1;
    e1.data=5;
    node* head=&e1;
    node e2;
    e2.data=10;
    // e1.next=&e2;
    node e3;
    e3.data=15;
    // e2.next=&e3;
    node e4;
    e4.data=20;
    // e3.next=&e4;
    e4.next=NULL;
    //address of first element 



    //siraf head ki madad se pura linked list print karna hai
    // cout<<e1.data<<endl;
    cout<<(*head).data<<endl;


    cout<<(*((*head).next)).data<<endl;

    //head=(*head).next;
    // cout<<e2.data<<endl;
    cout<<(*((*head).next)).data<<endl;//(*head).next ka wardan hai (*((*head).next))
    // cout<<e3.data<<endl;
    cout<<(*((*((*head).next)).next)).data<<endl;
    // cout<<e4.data<<endl;
    cout<<(*((*((*((*head).next)).next)).next)).data<<endl;


    // e3=*((*((*head).next)).next)
    //e4=*((*((*((*head).next)).next)).next)


cout<<endl<<endl<<endl<<endl;




node* temp=head;

//linking
while(temp!=NULL){
    (*temp).next=&(*((*temp).next));
        temp=(*temp).next;

}
    // for(int i=0;temp!=NULL;i++){

    //     (*temp).next=&(*((*temp).next));
    //     temp=(*temp).next;
    // }

//print 
    for(int i=0;head!=NULL;i++){

        cout<<(*head).data<<endl;
        head=(*head).next;
    }


    
    
    return 0;
}