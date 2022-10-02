//#include <iostream>
#include<stdio.h>
//compile://g++ test_code.cpp
//run://a.exe < input.txt > output.txt
#include<bits/stdc++.h>
#define ll  long long
#define vec vector  
#define ar array  
//just Throw hash map
//Pick the global decleration
//delete the dynamic allocation
//os_base::sync_with_stdio(0); 
//cin.tie(0);  
using namespace std;

void my_machine(int n){
    if(n==0){
        return;
    }

    int maxn=INT_MIN;
        for (int i = 0; i < n; i++)
        {   
            int l;
            cin>>l;
            maxn=max(maxn,l);
        }
   cout<< maxn;
            
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    my_machine(1);
    return 0;
}