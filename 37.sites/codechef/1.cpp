#include <iostream>
using namespace std;
#include<vector>// vector
#include <algorithm>// reverse ka 
// #include <bits/stdc++.h>
#include <numeric>// accumulate


int  fun (int n , int B ){

vector<int > a;
for (int i=0; n>0;i++){
    a.push_back(n%B);
    // int k=n/B;
    n=n/B;
}
reverse(a.begin(), a.end());

// to see 
for (int  i = 0; i <a.size();i++)
    {
        cout<<a[i]<<" ";
    }


 cout<<endl;
        return accumulate(a.begin(), a.end(), 0);   
// prinvec(n,a);

}

int main()
{
    int t;// 
    cin>>t;
        int n;
    int B;
    for (int i=0;i<t;i++){
    cin>>n>>B;
    cout<<fun(n, B);
    cout<<endl;
    }
    
    
    return 0;
}