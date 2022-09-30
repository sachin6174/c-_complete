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
auto input(){
    int k;
    cin>>k;
    return k;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a;cin>>a;
    if((a)%2){
        cout<<"odd"<<endl;
    }else{
        cout<<"even"<<endl;
    }

    // working fine ignore f****ng errors
    int p;
    if(int((input()))%2){
        cout<<"odd"<<endl;
    }else{
        cout<<"even"<<endl;
    }
        
    return 0;
}