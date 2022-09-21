#include <bits/stdc++.h> 
using namespace std;

template <typename T>class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };


LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    stack<int> s;
    while(head!=NULL){
        s.push(head->data);
        LinkedListNode<int>* temp=head;
        head=head->next;
        delete temp;
        
    }
    LinkedListNode<int> *ans=NULL;
    LinkedListNode<int> *tail=NULL;
    while(!s.empty()){
        LinkedListNode<int>* temp=new LinkedListNode<int>(s.top());
        if(ans==NULL){
            ans=temp;
            tail=temp;
        }else{
            tail->next=temp;
            tail=temp;
        }
        s.pop();
    }
    return ans;
}

int main(){
    LinkedListNode<int>*head;
    reverseLinkedList(head);

}