

#include <iostream>

class Node
{
public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};

using namespace std;


Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newnode = new Node(data);
		if (head == NULL)
		{
			head = newnode;
			tail = newnode;
		}
		else
		{
			tail->next = newnode;
			tail = newnode;
		}
		cin >> data;
	}
	return head;
}

void print(Node *head)
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}
int len(Node *head){
    if(head==NULL){
        return 0;
    }
    return 1+len(head->next);
}

Node *appendLastNToFirst(Node *head, int n)
{
    //Write your code here
    
    int l=len(head);
    if(n<1||l<n){
        return head;
    }
    Node * k=head;
    int i=1;
    Node *a=NULL;
	Node *b=NULL;
    while(head->next!=NULL){
        if(i==l-n){
           a=head;
           b=head->next;
           head->next=NULL; 
           head=b; 
        }else{
            head=head->next;
        }
        i++;
    }
head->next=k;
return b;
	
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		int n;
		cin >> n;
		head = appendLastNToFirst(head, n);
		print(head);
	}
	return 0;
}