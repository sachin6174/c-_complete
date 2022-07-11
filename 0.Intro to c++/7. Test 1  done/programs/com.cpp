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
    if (n == 0)
    {
        cout << INT_MIN;
        return 0;
    }
    int p = n + 1;
    int arr[p];
    arr[0] = INT_MIN;
    for (int i = 1; i < p; i++)
    {
        cin >> arr[i];
    }

    // int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    // int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + p, greater<int>());

    //     for (int i = 0; i < p; i++)
    // {
    //     cout<<arr[i];
    // }

    set<int, greater<int>> s;
    for (int i = 0; i < p; i++)
    {
        s.insert(arr[i]);
    }

    // cout<<endl;

    set<int, greater<int>>::iterator itr;
    // cout << "\nThe set s1 is : \n";

    int arr2[p];
    int size = 0;
    int i = 0;
    for (itr = s.begin(); itr != s.end(); itr++)
    {
        // cout << *itr << " ";
        size++;
        arr2[i] = *itr;
        i++;
    }
    if (size == 1)
    {
        cout << arr2[0];
        return 0;
    }
    cout << arr2[1];

    return 0;
}