#include <iostream>
//2,147,483,647
using namespace std;
#include <vector>

int count_of_obj=0;

template <typename T>
class treenode
{
    public:
    T data;
    vector<treenode<T> *> v;

    treenode(T data)
    {
        this->data = data;
        count_of_obj++;

    }

    

};
  void printtreerecursively(treenode<int> *rootaddress)

    // managing edge case //mazak case 
    {
        if (rootaddress==NULL)
    {
       return;
    }

        cout << rootaddress->data << endl;
        for (int i = 0; i < (rootaddress->v).size(); i++)
        {
            printtreerecursively((rootaddress->v).at(i));
        }
    }// base CASE HANDled by (rootaddress->v).size()

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






void deletetreerecursicely(treenode<int> *rootaddress)
{
    
        for (int i = 0; i < (rootaddress->v).size(); i++)
        {
            deletetreerecursicely((rootaddress->v).at(i));
        }
        delete rootaddress ;
}

treenode<int> * takeinputrecursively(){
    int nodedata;
    cout<<"data: " ;
    cin>>nodedata;
    treenode<int>* root=new treenode<int>(nodedata);
    int n;
    cout<<"no of children of" <<root->data<<":";
    cin>>n;
    for (int i = 0; i < n; i++)

    {
        treenode<int>* child= takeinputrecursively();
        root->v.push_back(child);

    }

    return root;

}
