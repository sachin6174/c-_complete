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

int my_machine(){

    return 5; 
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<&(my_machine()); // can print the address of only l-values  ont for rvalues // this gives error
    cout<<&(my_machine); // this does not gives any error
    return 0;
}