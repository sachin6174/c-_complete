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
    // int i=1;
    int n;
    cin>>n;
    for (int i =1; i <= n; i++)
    {
        if (i%3==0 && i%5==0)
        {
            cout<<"fizz buzz"<<endl;
        }
        else if(i%5==0){
            cout<<"buzz"<<endl;
        }
        else if(i%3==0 )
        {
            cout<<"fizz"<<endl;

        }
        else{
            cout<<i<<endl;
        }
    }
    
    
    return 0;
}