#include <iostream>
#include <stdio.h>
#define e 2.718281828
// compile://g++ test_code.cpp
// run://a.exe < input.txt > output.txt
// #include <bits/stdc++.h>
#define ll long long
#define vec vector
#define ar array
// just Throw hash map
// Pick the global decleration
// delete the dynamic allocation
// os_base::sync_with_stdio(0);
// cin.tie(0);
using namespace std;

void my_machine()
{
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int j = 10;

    int /* this is the type 0f address we want to put inside the pass to the constructor      */ * /* name of function for creating a pointer object */ p(&j);
    cout << *p;
    e=12;// # define macros are immutable durng run time
    return 0;
}