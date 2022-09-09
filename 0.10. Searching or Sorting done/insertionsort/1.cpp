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

int my_machine(int *arr, int p)
{
    int i = 0;
    while (i < 10)
    {
        if(p<=arr[i]){
            return 0;
        }
        if (arr[i] <= p <= arr[i + 1])
        {
            return i + 1;
        }
    }
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[10];
    for (int i = 0; i != 10;)
    {
        arr[i] = rand() / 100;
        i++;
    }
    sort(arr, arr + 1);

    for (int i = 0; i != 10;)
    {
        cout << arr[i] << '	';
        i++;
    }
    cout << char(10);
    cout << char(10);
    cout << char(10);
    cout << my_machine(arr, -1);

    return 0;
}