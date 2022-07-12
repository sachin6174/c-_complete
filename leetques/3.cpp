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
    string num1= "0";
    string num2= "0";
    int b=0,a=0;
        for(int i=num1.size()-1;i>=0;i--){
           a=a+ (num1[i]-48)*pow(10,num1.size()-1-i);
        }
        for(int i=num2.size()-1;i>=0;i--){
           b=b+ (num2[i]-48)*pow(10,num2.size()-1-i);
        }
        
        int k= a*b;
        cout<<k<<endl;
        string s;
        for(int i=0;k>0;i++){
          s.push_back(char((k%10)+48));
              k=k/10;
        }
        reverse(s.begin(),s.end());
        cout<< s;
    return 0;
}