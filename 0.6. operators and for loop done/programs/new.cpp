#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Write your code here
    // int min=INT_MAX;
    int maxv = 0;
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bool newstate = true;
    bool previous = true;
    int no = 0;
    for (int i = 0; i < n - 1; i++)
    {
        bool change;
        if(no==0){
        change = (a[i] > a[i + 1]);
        }else{
            change=!(a[i] > a[i + 1]);
        }

        previous = newstate;
        newstate = change && newstate;
        if ((newstate != previous) || (a[i] == a[i + 1]))
        {
            no++;
        }
        cout<<previous<<" "<<newstate<< " "<<no<<" ";
    }
    if (no > 1)
    {
        cout << "false";
    }
    else
    {
        cout << "true";
    }
}
