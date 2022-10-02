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

class circulararray{
    int n;
    int *a=new int [n];

};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;cin>>n;
    int *a=new int [n];
    // for (int i = 0; i < INT_MAX+1; i++)
    // {
    //     i=i%n;
    //     cin>>a[i];

    // }

    delete []a;// size will be avaliable in symbol table 
    
    // a[10]=10;

    cout<<-100%72
    
    ;
    
    return 0;
}