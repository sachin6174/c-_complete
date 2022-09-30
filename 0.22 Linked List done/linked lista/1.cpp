/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

#include <list>// doubly linked list 
#include<forward_list>// singly linked list 
#include <iostream>
#include<vector>

//2,147,483,647
using namespace std;

void printll(list<int > a){

}

int main()
{
    vector<int>v;
    cout<<&v<<endl;// it is a variable which is pointer storing address of first element of vector
    list<int>*a;// a is the name of the first node
    // there is no need of capacity function in linked lists;
    cout<<a->size()<<endl;
    cout<<&a<<endl;

    list<int> l = { 7, 5, 16, 8 };// list containing intezers


    a->push_back(1);
    a->push_back(2);
    cout<<a->size()<<endl;
    

    //
// ll print function in stl using iterator
/*
void showlist(list <int> g)
{
    list <int> :: iterator it;
    for(it = g.begin(); it != g.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
}
*/

    
    
    return 0;
}