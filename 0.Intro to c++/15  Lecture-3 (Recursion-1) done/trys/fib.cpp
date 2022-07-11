#include <iostream>
#include <stdio.h>
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

int my_machine(int n)
{
    if (n == 1)
    {
        return 1;
    }
    if(n==0){
        return 0;
    }
    return my_machine(n - 1) + my_machine(n - 2);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << my_machine(4);

    return 0;
}