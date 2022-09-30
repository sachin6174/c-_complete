// list rbegin() and rend() function in C++ STL– rbegin() returns a reverse iterator which points to the last element of the list. rend() returns a reverse iterator which points to the position before the beginning of the list.

#include <bits/stdc++.h>
using namespace std;
  
int main()
{
    list<int> lis = { 10, 20, 30, 40, 50 };
  
    cout << "The list in reverse order: ";
  
    for (auto it = lis.rbegin(); it != lis.rend(); ++it)
        cout << *it << " ";
  
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
  
int main()
{
    list<int> lis = { 10, 20, 30, 40, 50 };
  
    cout << "The list in reverse order: ";
  
    for (auto it = lis.rbegin(); it != lis.rend(); ++it)
        cout << *it << " ";
  
    return 0;
}