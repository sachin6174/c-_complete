#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

int main()
{
    node e1;
    e1.data = 5;
    node *head = &e1;
    node e2;
    e2.data = 10;
    node e3;
    e3.data = 15;
    node e4;
    e4.data = 20;
    e4.next = NULL;



    e1.next=&e2;
    e2.next=&e3;
    e3.next=&e4;

    node *temp = head;

    for(int i=0;temp!=NULL;i++){

        (*temp).next=&(*((*temp).next));
        // (*temp).next=&(*(*temp).next); kjgbjhgkuyjhgjhg
        temp=(*temp).next;
    }





    // linking
    // while (temp != NULL)
    // {
    //     (*temp).next = &(*((*temp).next));
    //     cout<<(*temp).next<<endl;
    //     temp = (*temp).next;
    // }

    //print//sahi kam kar raha hai
    for (int i = 0; head != NULL; i++)
    {

        cout << (*head).data << endl;
        head = (*head).next;
    }

    return 0;
}