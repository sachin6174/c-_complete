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

int int_my(string s){
    int k=0;
    for (int k = 0; k < s.size(); )
    {
        if(s[k++]<48 || s[k++]>58){
        cout<<"not a valid string to convert in int"; 
        return 0;
        }
    }
    int sum_=0;
    for (int i = 0; i < s.size(); i++)
    {
        sum_=sum_+(int(s[i])-48)*pow(10,s.size()-i-1);
    }
    return sum_; 
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
    cout<<int_my(s);
    
    return 0;
}