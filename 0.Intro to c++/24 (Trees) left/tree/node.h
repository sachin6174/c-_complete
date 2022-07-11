#include<iostream>
class treenode{
    public:
    int data;
    treenode* left=NULL;
    treenode* right=NULL;

    treenode(int data){
        this->data=data;
    }

};

treenode* input(){
    int data;
    cin>> data;
    if(data!=-1){
        treenode* k=new treenode (data);
        
    }
}