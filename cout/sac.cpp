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

int *p= new int(5);

int my_machine(){

    return *p; // returned value is getting stored at a memory location in stack which will be destroyed after returnning so it is not possible to get the address of storage  that returned value.

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<&(my_machine); // it returning 1 why i dont know
    // cout<<&(my_machine); // this does not gives any error
    return 0;
}