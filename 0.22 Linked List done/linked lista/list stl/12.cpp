// empty() – Returns whether the list is empty(1) or not(0).
#include <bits/stdc++.h>
using namespace std;
  
int main()
{
    // Creating a list
    list<int> demoList;
  
    // check if list is empty
    if (demoList.empty())
        cout << "Empty List\n";
    else
        cout << "Not Empty\n";
  
    // Add elements to the List
    demoList.push_back(10);
    demoList.push_back(20);
    demoList.push_back(30);
    demoList.push_back(40);
  
    // check again if list is empty
    if (demoList.empty())
        cout << "Empty List\n";
    else
        cout << "Not Empty\n";
  
    return 0;
}