//#include <iostream>
#include <stdio.h>
// compile://g++ test_code.cpp
// run://a.exe < input.txt > output.txt
#include <bits/stdc++.h>
#define ll long long
#define vec vector
#define ar array
// just Throw hash map
// Pick the global decleration
// delete the dynamic allocation
// os_base::sync_with_stdio(0);
// cin.tie(0);
using namespace std;

void my_machine()
{
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n=12; // i put some default value here as wedo in java script
    cin>>n;
    int divisor =2;
    bool divided=false;
    while (divisor<=sqrt(n))
    {
        if(n%divisor==0){
            cout<<"not prime";
            divided=true;
            // break;
        }
        
            divisor++;
        
    }
    if(!divided){
        cout<<"prime";
    }

    

    return 0;
}