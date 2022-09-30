class node {

public:
int data;
node *next;

//setter
node(int data){

this->data=data;

}

};



#include <iostream>
using namespace std;

node* input(){

    cout<<"dukya: h ya n"<<endl;
    char hayana;
    cin>>hayana;
    node* head=NULL;
    if (hayana=='h'){
   
    int data;cin>>data;
    for(int i=0; hayana='h';i++){
        node* address=new node(data);
        cout<<&(*address)<<endl;
        //name of that node is *address  //wardan idology
        // (*address).next=NULL;
        if(head==NULL){

        head=&(*address);
        }

        node* temp=&(*address);
        int ans=0;
        if(ans>=1){

                    (*address).next=temp;  }

        cout<<"dukya:h ya n "<<endl;
        cin>>hayana;
        if (hayana!='h'){
        return head;
    }
        cin>>data;
    }
    
    }
    else if(hayana!='h'){
        return head;
    }
    
    return head;  
}
void print (node* head)
{
    node* temp=head;
    cout<<head<<endl;
    
    for (int  i = 0; temp!=NULL; i++)
    {
    cout<<(*temp).data<<" ";
    temp=(*temp).next;

    }
}

int main()
{
    
    node* head= input();
    // cout<<input()<<endl;
    print (head);
    return 0;
}