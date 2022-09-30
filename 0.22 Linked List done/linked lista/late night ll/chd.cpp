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

// node * create_memory_block()
// {
//     int data;
//     cin>>data;
//     for(int i=0 ;    ; i++)
//     {
//         node newnode( data);
//     }


// }



int main()
{
    int data;
    cin>>data;

    for(int i=0 ;data!=-1; i++)
    {
        node*  newnode= new node ( data);
        cin>>data;
    }
    
    return 0;
}