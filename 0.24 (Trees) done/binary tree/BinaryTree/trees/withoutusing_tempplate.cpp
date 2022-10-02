#include <iostream>
//2,147,483,647
using namespace std;
#include <vector>

class treenode
{
public:
    int data;
    vector<treenode *> p; // array of pointers which is going to store address of a treenode

    treenode(int data)
    {
        this->data = data;
    }
};
treenode *root = NULL;
treenode *takeinut()
{

    treenode *temp;
    int data;
    if (root == NULL)
    {

        cin >> data;
        root = new treenode(data);
        temp = root;
    }

    int n;
    cout << endl
         << "enter no of children for childroot";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> data;
        treenode *childroot = new treenode(data);
        (temp->p).push_back(childroot);
        temp = childroot;
        //  cout<<endl<<"enter no of children for childroot   ";
        takeinut();
    }

    return root;
}

void printfun(treenode *root)
{
    cout << root->data << ">> ";

    for (int i = 0; i < (root->p).size(); i++)
    {
        cout << root->p[i] << " ";
        // cout<<((root->p).at(i))->data<<endl;
        printfun(root);
    }
}

int main()
{
    takeinut();
    treenode *temp = takeinut();

    printfun(root);

    return 0;
}