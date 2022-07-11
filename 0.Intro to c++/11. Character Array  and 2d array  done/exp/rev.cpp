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

void my_machine(int s,int e ,char*a){
    while(s<e){
        swap(a[s],a[e]);
    s++;
    e--;
    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
            
        int arr[100];
        for(int i=0;i!=100;){
        arr[i]=rand()/1000;
        i++;
        }
        char a[1000];
        cin.getline(a,120,'\n');
        my_machine(0,strlen(a)-1,a);

        cout<<endl;
        cout<<a;
        int store[1000];
        store[0]=0;
        int i=1,j=1;// for stor index
        while(i<strlen(a)){

            if(a[i]==' '){
                store[j]=i+1;
                j++;
            }
            i++;
        }
        store[j]=a[strlen(a)-1];
        // cout<<endl;
        // for(int i=0;i<j;){
        //     cout<< store[i]<<' ';
        //     i++;
        // }
        store[j]=strlen(a)-1;
        int p=0;
        while(p<j-1){
        my_machine(store[p],store[p+1]-2,a);
        p++;
        }
        // cout<<endl<<store[p]<<' '<<store[j];
        my_machine(store[p],store[j],a);


        // cout<<endl<<endl;
        // cout<<a;



            return 0;
}