//list rbegin() and rend() function in C++ STL– rbegin() returns a reverse iterator which points to the last element of the list. rend() returns a reverse iterator which points to the position before the beginning of the list.
#include <bits/stdc++.h>
using namespace std;
  
int main()
{
    // declaration of list
    list<int> lis = { 5, 6, 7, 8, 9 };
  
    // Prints the first element
    cout << "The first element is: " << *lis.cbegin();
  
    // printing list elements
    cout << "\nList: ";
  
    for (auto it = lis.cbegin(); it != lis.end(); ++it)
        cout << *it << " ";
  
    return 0;


}


#include <bits/stdc++.h>
using namespace std;
  
int main()
{
  
    // declaration of list
    list<int> lis = { 10, 20, 30, 40, 50 };
  
    // printing list elements
    cout << "List: " << endl;
  
    for (auto it = lis.cbegin(); it != lis.cend(); ++it)
        cout << *it << " ";
  
    return 0;
}