#include <iostream>
//2,147,483,647
using namespace std;

class node{
    public:
    int data;
    node *next;

        //constructors
        node (){
            data=0;
            next=NULL;
        }
        node (int data){
           this->data =data;
            next=NULL;
        }
        node (int data,node* address){
            this->data=data;
            this->next=address;
        }



};