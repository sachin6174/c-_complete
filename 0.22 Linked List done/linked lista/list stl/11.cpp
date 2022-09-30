// list crbegin() and crend() function in C++ STL– crbegin() returns a constant reverse iterator which points to the last element of the list i.e reversed beginning of container. crend() returns a constant reverse iterator which points to the theoretical element preceding the first element in the list i.e. the reverse end of the list.
#include <bits/stdc++.h>
using namespace std;
  
int main()
{
    // declaration of the list
    list<int> lis = { 10, 20, 30, 40, 50 };
  
    // prints the last element
    cout << "The last element is: " << *lis.crbegin();
    cout << "\nList: ";
  
    for (auto it = lis.crbegin(); it != lis.crend(); ++it)
        cout << *it << " ";
  
    return 0;
}



#include <bits/stdc++.h>
using namespace std;
  
int main()
{
    // declaration of the list
    list<int> lis = { 7, 6, 5, 4, 3, 2 };
  
    cout << "List: " << endl;
  
    for (auto it = lis.crbegin(); it != lis.crend(); ++it)
        cout << *it << " ";
  
    return 0;
}