#include <iostream>
//2,147,483,647
using namespace std;
#include"binarytreeclass.h"

int heightOfTree(binarytree<int>*root ){
    
    if(root==NULL){
        return 0;
    }

  return max(heightOfTree(root->leftchild) ,heightOfTree(root->rightchild))+1 ;
   
}


int main()
{
    binarytree<int> root(1);
    binarytree<int> leftchild(2);
    binarytree<int> rightchild(3);
    root.leftchild=&leftchild;
    root.rightchild=&rightchild;

    cout<<heightOfTree(&root);

    return 0;
}