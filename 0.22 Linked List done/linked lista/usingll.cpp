#include <iostream>
//2,147,483,647
using namespace std;
#include "llclass.h"

void print_ll(node *head)
{
    if (head == NULL)

    {
        return;
    }
    cout << head->data << " ";
    print_ll(head->next);
}

node *takeinput()
{
    int data;
    cin >> data;
    node *head = NULL;
    node *tail = NULL;
    if (data == -1)
    {
        return head;
    }
    else
    {
        node *n1 = new node(data);
        head = n1;
        tail = n1;
        while (data != -1)
        {
            cin>>data;
            node *newnode=new node(data);
            tail->next=newnode;
            tail=tail->next;
        }
    }
    return head;
}

int main()
{
    node n1(5); // this is going to act as my last node
    node n2(10, &n1);
    node n3(15, &n2);
    node n4(20, &n3);
    print_ll(&n4);
    cout<<endl;

    print_ll(takeinput());

    return 0;
}