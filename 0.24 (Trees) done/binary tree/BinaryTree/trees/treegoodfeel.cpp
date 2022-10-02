#include <iostream>
//2,147,483,647
using namespace std;
#include<vector>


int count_of_obj=0;
template<typename T>
class treenode{
    public:
    T data;
    vector <treenode<T>*> v;

    treenode(T data)
    {
        this ->data=data;
        count_of_obj++;

    }

};
void printtree_recursivey(treenode<int> * rootaddress){

     if (rootaddress==NULL)
    {
       return;
    }

cout<<rootaddress->data<<endl;
for (int i = 0; i < (rootaddress->v).size(); i++)
{
    printtree_recursivey(  (rootaddress->v).at(i)  );
}
}

void printtreeinbetterscence(treenode<int> *rootaddress){

     if (rootaddress==NULL)
    {
       return;
    }
    cout<<rootaddress->data<<": ";
    for (int i = 0; i < rootaddress->v.size(); i++)
    {
       cout<<rootaddress->v[i]->data<<"  ,";
    }
    cout<<endl;

    for (int i = 0; i < rootaddress->v.size(); i++)
    {
       printtreeinbetterscence ( rootaddress->v[i]);
    }
    
}



int main()
{
    treenode<int> root(0);
    treenode<int> child1_of_root(1);
    treenode<int> child2_of_root(2);
    root.data=5;

    treenode<int> * rootaddress=&root;
    root.v.push_back(&child1_of_root);
    root.v.push_back(&child2_of_root);

    printtree_recursivey(rootaddress);
    cout<<endl;
    printtreeinbetterscence(rootaddress);
    cout<<"number of nodes created  "<<count_of_obj;
    return 0;
}

/*
#include <iostream>
//2,147,483,647
using namespace std;
#include<vector>


template<typename T>
class treenode{
    public:
    T data;
    vector <treenode<char>*> v;

    treenode(T data)
    {
        this ->data=data;
    }

};

int main()
{
    treenode<int> root(0);
    treenode<char> child1_of_root(1);
    treenode<char> child2_of_root(2);
    root.data=5;

    treenode<int> * rootaddress=&root;
    root.v.push_back(&child1_of_root);
    root.v.push_back(&child2_of_root);

    
    return 0;
}
*/