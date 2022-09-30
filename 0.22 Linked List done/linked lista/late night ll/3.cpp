#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
//consrtuctor maade.
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};

/*
//O(n^2) kyuki while ke andar while hai
node *  takeandlink( )
{
    int data;
    cin>>data;
    node * head=NULL;
    while (data!=-1)
    {
        node* dynele= new node(data);
        if(head==NULL){head =&(*dynele);}

    else{ 
             node * temp=head;

             //imp hai ye
                while ((*temp).next!=NULL)
                {
                    temp=(*temp).next;
                }


                (*temp).next=&(*dynele);
      }

        cin>>data;
    }  
return head;

}
*/
node * deinput (){
int data1;
cin>>data1;
node* head=NULL;
node * tail=NULL;
while (data1!=-1)
{
    node * newnode =new node(data1);
    if(head== NULL)
    {
        head = &(*newnode);
        tail = &(*newnode);
    }
    else{
        (*tail).next=&(*newnode);
        tail=(*tail).next;
    }
    cin>>data1;

}
return head;

}


node* insertatith  (node * head,int newnodedata, int ithpos){

// node *head=deinput();
node* newnode=new  node(newnodedata);

node* temp=head;
for(int i=0,head=!NULL;i++;)
{

if(ithpos==1)
{
    node *head=&(*newnode);
    (*newnode).next=temp;

}
// node *temp2=(*head).next;
// if(ithpos==2){
// (*head).next=&(*newnode);
// (*newnode).next=&(*(temp2));


// }
else {  
}
}


return head;
}


void printll(node* head){
     for (int i = 0; head != NULL; i++)
    {

        cout << (*head).data << " ";
        head = (*head).next;
    }
}

int main()
{
 node *head=deinput();
 cout<<endl;
 printll(head);

cout<<endl;
int newnodedata;
cin>>newnodedata;
 cout<<endl;
 int ithpos;
 cin>>ithpos;   

 cout<<endl;
 node * new_head;
new_head=insertatith(head,newnodedata,ithpos);
 printll(new_head);
    return 0;
}