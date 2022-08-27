#include<bits/stdc++.h>
#include"node.h"
using namespace std;

// treenode* input(){
//     int data;
//     cin>>data;
//     treenode* head=NULL;
//     treenode* left=NULL;
//     treenode *right=NULL;

//     while(data!=NULL){
        
//     }
// }
treenode* takeInput() {
    int data;
    string a;

    cin>>data>>a;
    treenode*n = NULL;

    if(a=="true") {
        n = new treenode(data);
        n->left = takeInput();
        n->right = takeInput();
    }
    if(a=="false") {
       return NULL;
    }
    return n;
}
void print(treenode*head){
    if(head==NULL){
        return;
    }
    cout<<head->data<<" ";
    if(head->left!=NULL){
        print(head->left);
    }
    if(head->right!=NULL){
    print(head->right);
    }
}

int main(){
    treenode a(100);
    treenode a1(10);
    
    treenode a2(20);
    treenode a11(30);
    treenode a12(40);
    treenode a21(50);
    treenode a22(60);
    // head=a;
    a.left=&a1;
    a.right=&a2;
    a1.left=&a11;
    a1.right=&a12;
    a2.left=&a21;
    a2.right=&a22;
    // print(&a);
    treenode * head=takeInput();
    print(head);


}
