#include <iostream>
using namespace std;
#include<algorithm>
#include <bits/stdc++.h>


int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>a[i];
    }

// int p=0;
    sort(a, a+ n);
    // cout<<p<<endl;

 for (int  i = 0; i < n; i++)
    {
        cout<<a[i];
    }

 for (int  i = 0; i < n; i++){

int p=min(a[i],a[i+1]);
 }



    return 0;
}