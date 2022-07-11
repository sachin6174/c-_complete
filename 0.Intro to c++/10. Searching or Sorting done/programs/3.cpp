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
    int i=5;
            while(i--){
                int a=(rand()/1000)+1,b=(rand()/1000)+1,c=(rand()/1000)+1;
            // cin>>a>>b>>c;
            int l=a+b+c;
            int m=a*b*c;
            cout<<"sum="<<l<<' '<<"product="<<m<<endl;
            int p1,q,r;
            cin>>p1>>q>>r;
            if (p1+q+r==l&& p1*q*r==m){
                cout<<"well Done";

            }else
            {
            cout<<"you looser"<<char(10);
            }
            cout.clear();
            }
    // a=rand();
    
    return 0;
}