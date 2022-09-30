#include <iostream>
#define ll  long long;
using namespace std;
#include"treeclas.h"
#include<array>


void printtree(treenode<int>* root){


    if(root==NULL){
        return;
    }
    cout<<root->data;
    for (int i = 0; i < root->children.size(); i++)
    {
        printtree(root->children[i]);
    }

}

void printtreebetter(treenode<int>* root){

    // edge case if they will give me null tree then there should be something to handle called as edge case

    if(root==NULL){
        return;
    }

    // this is auto matically handeled  it should be base case
    // if there is 0 children to the node it will not going to print any thing and it will return it self 
    // so no need to write base case

    // if (root->children.size()==0)
    // {
        // this is not a correct base case
        //first ke last se return kar jaiga // always autmatoc handling of base case rahne do for tree
    //     return;
    // }
    

    cout<<root->data<<" :";
    for (int i = 0; i < root->children.size(); i++)
    {
        // cout<<(*(root->children[i])).data;
        cout<<(root->children)[i]->data<<"  ";
    }
    cout<<endl;
    
    for (int i = 0; i < root->children.size(); i++)
    {
        printtreebetter(root->children[i]);
    }

}



treenode<int>* treeinput(){
    int data;
    cout<<"enterdata ";
    cin>>data;
    treenode<int>* root=new treenode<int> (data);
    int n;cout<<"no of childre of "<<data<<" ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {   
        // take input function will give me the address of complete child tree so lets store address in variable 
        treenode<int>*childaddress=treeinput();
        root->children.push_back(childaddress);
        // just do 
       // root->children.push_back(treeinput());

    }
    return root;// take input is not dependent on this return line it is auto matically handling the stuff

}

int main()
{
    treenode<int> k;// now default constructors are avaliable// created a object of treenode type
    cout<<k.data<<endl;// it has default garbadge value in the data block of object
    k.data=10;// assigning data to data block of k object
    // here children arrya size is zero now so no problem with addresses
    

    treenode<int> s2(100);//now new object created 
    cout<<s2.data<<endl<<endl;
    // still there is 0 size to the vector as noting has been pushed

    // parameterized constructor called
    treenode<int> s3(123,s2);
    // treenode<int> s3(123,k);// object of same name can not be created 

    treenode<int>s4(10);
    s3.children.push_back(&s4);

    printtreebetter(&s3);
    cout<<endl;
    treenode<int>* root=treeinput();
    cout<<endl;
    printtreebetter(root);

    // pushing multiple nodes 



    return 0;
}