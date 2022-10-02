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

    int n=12;
    cin>>n;
    int divisor =2;
    while (divisor<=sqrt(n))
    {
        if(n%divisor==0){
            cout<<"not prime";
            return 0;
        }
        else{
            divisor++;
        }
    }
    cout<<"prime";
    
    
    return 0;// code below this will not be executed and we can have multiple return in a single main function once the retun will execute we will be out of the function


}