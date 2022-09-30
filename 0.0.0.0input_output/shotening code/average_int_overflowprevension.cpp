#include <iostream>
#define endl '\n'
#include <climits>
using namespace std;

int32_t main()
{
    // av=(a+b)/2
    // av=a+(b-a)/2 // will work
    // av=b-(b-a)/2  // will work
    cout << INT_MAX + (INT_MAX - INT_MAX) / 2 << endl;// this will save overflow of int 
    cout << INT_MAX - (INT_MAX - INT_MAX) / 2 << endl; // this will also save overflow of the int 
    cout << (INT_MAX + INT_MAX) / 2 << endl; // here the int will over flow
    cout << (1LL * INT_MAX + 1LL * INT_MAX) / 2; // int over flow is managed using  a long long int to store data in temporary memory

    return 0;
}