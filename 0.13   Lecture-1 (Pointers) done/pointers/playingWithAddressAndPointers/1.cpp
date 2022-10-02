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

    int a=10;
    int a1=11;
    int a2=12;
    int a3=13;
    int a4=14;
    double a5=14.2555;

    int* l[]={&a,&a1,&a2,&a3,&a4};
    cout<<l<<endl;
    cout<<&l[0]<<endl;
    
    return 0;
}