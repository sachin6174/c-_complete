#include <iostream>
#include<stdio.h>
//compile://g++ test_code.cpp
//run://a.exe < input.txt > output.txt
// #include<bits/stdc++.h>
#define ll  long long
#define vec vector  
#define ar array  
//just Throw hash map
//Pick the global decleration
//delete the dynamic allocation
//os_base::sync_with_stdio(0); 
//cin.tie(0);  
using namespace std;

void my_machine(int a [][3], int m ,int n){
    int i=0;
    int *p;
    while(i<min(m,n)){
        p=*a+i*n+i;
        cout<<*p<<' ';
        i++;
    }
    
}

int main()
{
    int a[7][3];
    int i=0;
    while(i<7){
        int j=0;
        while(j<3){
            a[i][j]=rand()%10;
            // cout<<int (&(a[i][j]))<<' ';
            cout<< a[i][j]<<' ';
            j++;
        }
        cout<<endl;
        i++;
    }
    cout<<endl;
    my_machine(a,7,3);
    return 0;
}