#include <iostream>
//2,147,483,647
using namespace std;
#include <vector>
#include <ostream>
#include <bits/stdc++.h>
//static allocation

class treenode
{
public:
    int data;
    vector<treenode *> children;

    treenode(int data)
    {
        this->data = data;
    }
};

void printfun(treenode root)
{

    for (int i = 0; i < ((root).children).size(); i++)
    {
        cout << (*(((root).children).at(i))).data << endl;
    }
}

int main()
{
    treenode root(10);
    treenode child1(15);
    treenode child2(20);
    // treenode root = &root;
    (root.children).push_back(&child1);
    (root.children).push_back(&child2);

    cout << ((root).data) << endl;
    // cout<<(*(((root).children).at(0))).data<<endl;
    // cout<<(*(((root).children).at(1))).data<<endl;

    printfun(root);
    return 0;
}