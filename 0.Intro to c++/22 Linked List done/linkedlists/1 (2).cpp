#include <iostream>
#include <climits>
#include <vector>
#include<algorithm>
#include <utility> //contains the pair stl
#define endl '\n'// this is opposite of typedef
using namespace std;
typedef long long ll;// are used for data types
typedef vector<int> vi;
typedef pair<int,int> pi;
#include <stdint.h>
// macros
#define F first
#define S second
#define PB push_back
#define MP make_pair

class Node{
    public:
        int data;
        Node *next;

        Node(int data){
            this -> data = data;
            this -> next = NULL;
        }
};


void print(Node *head){
    Node *temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main(){

    Node *node1 = new Node(10);
    Node *node2 = new Node(20);
    node2 -> next = node1;
    print(node2);
}