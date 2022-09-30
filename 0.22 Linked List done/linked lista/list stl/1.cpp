//front() – Returns the value of the first element in the list.
//push_back(10) to add element in list
// decleration of linked list: list<int> demoList;



#include <iostream>
#include<list>
#include <iterator>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    list<int> demoList;
  
    // Add elements to the List
    demoList.push_back(10);
    demoList.push_back(20);
    demoList.push_back(30);
    demoList.push_back(40);
  
    // get the first element using front()
    int ele = demoList.front();
  
    // Print the first element
    cout << ele;
  
    return 0;
    
    return 0;
}