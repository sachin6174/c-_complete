#include <iostream>
//2,147,483,647
using namespace std;
#include<vector>


class node
{
public:

    int data;
    node *next;

        node (int data){
            this->data=data;
            this->next=NULL;
        }
};

 void printll(node *head)
    {
        while ((*head).next != NULL)
        {
            cout << (*head).data << "  ";
            head = (*head).next;
        }
        cout<<(*head).data;
        //*((*head).next).data
        //*(*((*head).next).next).data
    }
    node * takinginputusingvector(){
        int data;cin>>data;
        vector<node *>p;
        while(data!=-1){

            node * sachin =new node (data);
            p.push_back(&(*sachin));
            cin>>data;
    

        }

        for (int i=0;i<p.size()-1;i++)
    {
        (*(p.at(i))).next=p.at(i+1);
    }
            return (p.at(0));
    }


int main()
{
    // node a;
    node * head =takinginputusingvector();
cout<<endl;
    printll(head);

    


    
    return 0;
}