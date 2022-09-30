// list::begin() and list::end() in C++ STL– begin() function returns an iterator pointing to the first element of the list


#include <iostream>
#include <list>
using namespace std;
 
int main()
{
    // declaration of list container
    list<int> mylist{ 1, 2, 3, 4, 5 };
 
    // using begin() to print list
    for (auto it = mylist.begin(); it !=
                            mylist.end(); ++it)
        cout << ' ' << *it;
    return 0;
}


#include <iostream>
#include <list>
using namespace std;
 
int main()
{
    // declaration of list container
    list<int> mylist{ 1, 2, 3, 4, 5 };
 
    // using end() to print list
    for (auto it = mylist.begin(); it !=
                                mylist.end(); ++it)
        cout << ' ' << *it;
    return 0;
}