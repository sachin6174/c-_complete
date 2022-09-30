#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;

    node(int n){
        this->data=n;
        node *next=NULL;
    }

};
//siraf head ki madad se sare element access kar
int main()
{
    node e1(4);
    node *head =&e1;
    node e2(7);
    e1.next=&e2;

    return 0;
}