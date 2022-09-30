// pop_front() – Removes the first element of the list, and reduces size of the list by 1.

#include <bits/stdc++.h>
using namespace std;
  
int main()
{
    // Creating a list
    list<int> demoList;
  
    // Adding elements to the list
    // using push_back()
    demoList.push_back(10);
    demoList.push_back(20);
    demoList.push_back(30);
    demoList.push_back(40);
  
    // Initial List:
    cout << "Initial List: ";
    for (auto itr = demoList.begin(); itr != demoList.end(); itr++)
        cout << *itr << " ";
  
    // removing an element from the front of List
    // using pop_front
    demoList.pop_front();
  
    // List after removing element from front
    cout << "\n\nList after removing an element from front: ";
    for (auto itr = demoList.begin(); itr != demoList.end(); itr++)
        cout << *itr << " ";
  
    return 0;
}