//push_back(g) – Adds a new element ‘g’ at the end of the list.
#include <bits/stdc++.h>
using namespace std;
  
int main()
{
    // Initialization of list
    list<int> demo_list;
  
    // intital size of list
    cout << "Initial Size of the list: "
         << demo_list.size() << endl;
  
    // Adding elements to the list
    // using push_back function
    demo_list.push_back(10);
    demo_list.push_back(20);
    demo_list.push_back(30);
  
    // Size of list after adding
    // some elements
    cout << "Size of list after adding three "
         << "elements: " << demo_list.size();
  
    return 0;
}