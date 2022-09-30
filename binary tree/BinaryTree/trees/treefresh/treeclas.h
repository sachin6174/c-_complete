#include <iostream>
// 2,147,483,647
// non sorted
// a[]={2,6,1,6,8,3,6,2,6,0,4,-2}
// sorted
// a[]={-5,-4,2,4,6,8,9,12,45,}
using namespace std;
#include <vector>

template <typename T>

class treenode
{
public:
    T data;

    vector<treenode<T> *> children;

    treenode()
    {
        // it is a default constructor
    }

    treenode(T data)
    {
        this->data = data;
        // children vector does not have size yet 
        //size will be avaliable when aelement is pushbacked
        // so no need to push back null addresses to treenode.children[i]

        
    }

    treenode(T data, treenode<T> childofnode)
    {
        this->data = data;
        (this->children).push_back(&childofnode);
        //it will just push the address of a node in root given
    }
    // make a constructor which take array of treenode object as argument and places the address of elements in the vector of root

    
};
