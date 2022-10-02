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

void my_machine(){

    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int e,w,s;
    cin>>s>>e>>w;
    int i=0;
    while (s+w*i<=e)
    {
        cout<<s+w*i<<"\t"<<int((s+w*i-32)*(5.0/9))<<endl;
        i++;
    }
    
    return 0;
}