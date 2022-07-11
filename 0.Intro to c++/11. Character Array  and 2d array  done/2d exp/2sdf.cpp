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

void get_matrix(int m,int n );

void my_machine(int a[][100],int m,int n){

    // cout<<&(a[0][0])<<endl;//cout<<a<<endl;
    int i=0;

    // cout<<typedof(i)<<endl;
    cout<<a<<endl;
    // int *p=a;
    // while(i<min(m,n)){
    //     cout<<p<<' ';
    //     i++;
    // }
    
}

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    
    // get_matrix(5,5);
    int m,n;
    cin>>m>>n;
    int a[100][100];
    int i=0;
    while(i<m){
        
        int j=0;
        while(j<n){
            a[i][j]=rand()%100;
            cout<<a[i][j]<<' ';
            j++;
        }
        cout<<endl;
        i++;
    }
    cout<<endl;
    my_machine(a,m,n);

   

    return 0;
}

void get_matrix(int m,int n ){
    int a[100][100];
    int i=0;
    while(i<m){
        
        int j=0;
        while(j<n){
            a[i][j]=rand()%100;
            cout<<a[i][j]<<' ';
            j++;
        }
        cout<<endl;
        i++;
    }
}