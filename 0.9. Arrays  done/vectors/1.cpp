#include <iostream>
using namespace std;
#include<vector>
#include <algorithm>
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
    



    vector<int> s;
    for (int  i = 0; i < n-1; i++)
    {
        // int 
        for(int j=1;j<n;j++)
        {int p=min(a[i],a[j]);
            s.push_back( (j-i)*p);
        }
        // j++;
    }
    
    for (int  i = 0; i < s.size(); i++)
    {
        cout<<s.at(i)<<" ";
    }
cout<<endl;
    cout<<*max_element(s.begin(), s.end());

    
    
    return 0;
}