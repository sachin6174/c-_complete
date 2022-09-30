#include <iostream>
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

bool my_machine(ll int n){

    if((n)<2) {
            return false;
        }
    ll int i=2;
    
    while(i!=int(sqrt(n))){ 
        cout<<i<<endl;
        if((n)%i==0){
            cout<<i<<' '<<(n)%i;
            cout<<"i am here"<<'\n';
            return false;
        }
        i++;
    }
    
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   ll int n;
   cin>>n;
   if( my_machine(n)){
    cout<<"prime";
   }else{
    cout<<"non prime";
   }

    return 0;
}