#include <iostream>
#include<stdio.h>
//compile://g++ test_code.cpp
// run:a.exe < input.txt > output.txt
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

void my_machine(){


    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int p[10]={0};
    cout<<&p<<" "<<p<<" "<<*p<<endl;

    cout<<endl;
    cout<<endl;
    cout<<endl;
    int kl=0;
    while(kl<10){
        *(p+kl)=kl;
        cout<<(p+kl)<<" "<<*(p+kl)<<" ";
        kl++;
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;

    // no extra block for p;// p ha entry as address of ooth elemrnt of the array
    int *k1=p;/*  int  */// but we can store the address in a seperate pointer variable ;

    int a[10][6]={{0}};// 10 array of size 6 //60 blocks of int 
    cout<<&a<<" "<<a<<" "<<*a<<" "<<**a<<endl;
    // no extra block for a
    // static 2d array doen not support double pointers
    // int **k22=a;
    int *k222=&a[0][0];
    
    int p1=1;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            a[i][j]=p1;
            p1++;
            cout<<int(&(a[i][j]))<<" "<<a[i][j]<<" ";
        }
        cout<<endl;
        
    }
    



    cout<<endl;
    int no_of_rows=10;
    int i=0;
    cout<<endl;
    while(i<no_of_rows){
        cout<<int(*(a+i))<<endl;
        i++;
    }
    int *k=*a;
    

    cout<<endl;

    i=0;
    while(i<6){
        cout<<*(*(a+1)+i)<<" ";
        i++;
    }

    cout<<*((a+1))<<endl;

    return 0;
}