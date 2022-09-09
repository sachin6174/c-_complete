//#include <iostream>
#include <stdio.h>
// compile://g++ test_code.cpp
// run://a.exe < input.txt > output.txt
#include <bits/stdc++.h>
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

    int arr[100];
    for (int i = 0; i != 100;)
    {
        arr[i] = rand() / 1000;
        i++;
    }
    for (int i = 0; i != 100;)
    {
        cout << arr[i] << '	';
        i++;
    }
    cout << endl;

    int *p = new (int);
    *p = 10;

    cout << &p << "  " << p << "  " << *p << endl;
    int *p1 = new (int[100]);
    *(p1 + 10) = 10;
    cout << *p1;
    delete[] (p1);
    *(p1 + 10) = 10; // this memory not belong to me
    cout << endl
         << *(p1 + 10); // this memory not belong to me

    return 0;
}