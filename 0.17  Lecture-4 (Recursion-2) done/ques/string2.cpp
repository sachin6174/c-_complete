#include <iostream>
using namespace std;

int main()
{
    string a;
    cin>>a;

    string  d;
    string e;
    getline(cin, d);// this will be executed if we will use space to take nextinput if we enter the it would not store  anything.
    getline(cin, e);
    cout<<a<<endl<<d <<endl<<e;

    return 0;
}