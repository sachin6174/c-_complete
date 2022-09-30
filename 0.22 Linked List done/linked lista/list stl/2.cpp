// back() – Returns the value of the last element in the list .

#include <bits/stdc++.h>
using namespace std;
  
int main()
{
    // Initialization of list
    list<int> demo_list;
  
    // Adding elements to the list
    demo_list.push_back(10);
    demo_list.push_back(20);
    demo_list.push_back(30);
  
    // prints the last element of demo_list
    cout << demo_list.back();//30 wiil be returned
  
    return 0;
}