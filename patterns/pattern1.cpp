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
    int n;
    cin >> n;
    // int count = 1;

    for (int i = 0,count =1; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << count << "   ";
            count++;
        }
        cout << endl;
        count=1;
    }
    // count =5;

    // cout<<'5'*5;
    return 0;
}