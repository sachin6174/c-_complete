#include <iostream>
//2,147,483,647
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

node *takeinput()
{
    int data;
    cin >> data;

    node *head = NULL;
    node *tail = NULL;

    while (data != -1)
    {
        node *newnode = new node(data);
        if (head == NULL)
        {

            head = &(*newnode);
            tail = &(*newnode);
        }
        else
        {
            (*tail).next = &(*newnode);
            tail = &(*((*tail).next));
        }
        cin >> data;
    }

    return head;
}

void printll(node *head)
{
    while ((*head).next != NULL)
    {
        cout << (*head).data << "  ";
        head = (*head).next;
    }
    cout << (*head).data;

    //*((*head).next).data
    //*(*((*head).next).next).data
}

int dataofpthindex(int p, node *head)
{

    for (int i = 0; i < p; i++)
    {
        head = &(*((*head).next));
    }
    return (*head).data;
}

int main()
{

    node *head = takeinput();
    cout << endl;

    printll(head);
    cout << endl;
    int p;
    cin >> p;
    cout<<dataofpthindex(p,head);

    return 0;
}