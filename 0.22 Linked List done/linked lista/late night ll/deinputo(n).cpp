#include <iostream>
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

node *deinput()
{
    int data1;
    cin >> data1;
    node *head = NULL;
    node *tail = NULL;
    while (data1 != -1)
    {
        node *newnode = new node(data1);
        if (head == NULL)
        {
            head = &(*newnode);
            tail = &(*newnode);
        }
        else
        {
            (*tail).next = &(*newnode);
            tail = (*tail).next;
        }
        cin >> data1;
    }
    return head;
}

void printll(node *head)
{
    for (int i = 0; head != NULL; i++)
    {

        cout << (*head).data << " ";
        head = (*head).next;
    }
}
int main()
{
    node *head = deinput();
    printll(head);
    return 0;
}