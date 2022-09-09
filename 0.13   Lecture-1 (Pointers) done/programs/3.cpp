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

void my_machine(int *l){
   
        cout<<l[-5]<<' ';
        cout<<l[-4]<<' ';
        cout<<l[-3]<<' ';
         cout<<l[-2]<<' ';
         cout<<l[-1]<<' ';
         cout<<l[0]<<' ';
         cout<<l[1]<<' ';
       
        
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a[10]={1,2,3,4,5,6,7,8,9,0};
    my_machine(a+5);

    cout<<(&a[0])-(&a[3])<<endl;
    int *p=&a[0];
    int *q=&a[3];
    cout<<(q)-(p)<<endl;
    return 0;
}