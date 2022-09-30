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

void my_machine(int n){

    if(n==0){cout<<n; return;}

    my_machine(n-1);
    cout<<" "<<n;   
}
void my_machine2(int n){

    if(n==0){cout<<n; return;}

    cout<<n<<" ";   
    my_machine2(n-1);
}
ll int my_machine3(int n){

    if(n==0){ return 1;}

       
    my_machine3(n-1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    my_machine(2);
    cout<<"\n";
    my_machine2(2);
    cout<<"\n";
    cout<<my_machine3(5);
    

    return 0;
}