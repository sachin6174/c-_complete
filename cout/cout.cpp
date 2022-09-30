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
    // cout<<{1,2,3,4,5}; // wrong // valid just for builtin data types
    cout<<(true&& false) <<"\n"; // any expression is possible expression must be in a barckets
    // any expression which is going to be evaluated to a builtin data type
    cout<<(1+2>5); // operator presidence of > is very late // nahi bada hai 0
    // for time being imagine string also a builtin data type

    // string p="sachin"+"kumar"; dont know why it is not working 
    // cout<<("sachin"+"kumar")<<endl; not done here 
    
    return 0;
}