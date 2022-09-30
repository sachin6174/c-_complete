#include <iostream>
//2,147,483,647
using namespace std;

template<typename T>

class node {
    public:
    T data;
    node<T>* next;

    node(int data) {

        this->data=data;
        this->next=NULL;

    }
};

node<int> * takeinput(){
node<int>* firstKaaddress;
node<int>* firstKaaddresschange_kar_sakte_ho;
int data;
cin>>data;
if(data==-1){
    cout<<"kyu mazak kar rha hai bhi";
}
else {
    node<int>* node1= new node<int>(data);
    firstKaaddress=node1;
    firstKaaddresschange_kar_sakte_ho=node1;
}
cin>>data;
while (data!=-1)
{
    node<int>*afternode=new node<int>(data);
    firstKaaddresschange_kar_sakte_ho->next=afternode;
    firstKaaddresschange_kar_sakte_ho=afternode;
    cin>>data;
}

return firstKaaddress;

}

 void printiteratively(node<int>* head){
     while (head!=NULL)
     {
          cout<<head->data<<endl;
          head=head->next;
     }
     
    

 }
 void printrecursively1(node<int>* head){
    
    if(head==NULL){return;}

    cout<<head->data<<" ";
    printrecursively1(head->next);
    
 }

int main()
{
    printiteratively(takeinput());
    // cout<<endl;
    printrecursively1(takeinput());

    return 0;
}