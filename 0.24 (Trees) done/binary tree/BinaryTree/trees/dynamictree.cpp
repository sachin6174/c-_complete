#include <iostream>
//2,147,483,647
using namespace std;
#include"maintree.h"

// void printtreerecursively(treenode<int> *rootaddress)
//     {
//         cout << rootaddress->data << endl;
//         for (int i = 0; i < (rootaddress->v).size(); i++)
//         {
//             printtreerecursively((rootaddress->v).at(i));
//         }
//     }




int main()
{
    // treenode<int>* root =new treenode<int>(1);
    // treenode<int>* child1_of_root =new treenode<int>(1);
    // treenode<int>* child2_of_root =new treenode<int>(1);
    // (root->v).push_back(child1_of_root);
    // (root->v).push_back(child2_of_root);
    // takeinputrecursively();
    
    printtreerecursively(takeinputrecursively());
    printtreeinbetterscence(takeinputrecursively());
    



    //delete root 
    // delete root;
    // for (int i = 0; i < (root->v).size(); i++)
    // {
    //    delete root->v[i];
    // }

    deletetreerecursicely(takeinputrecursively());
    
    printtreerecursively(takeinputrecursively());// tree deleted so it should not give any output
    
    return 0;
}