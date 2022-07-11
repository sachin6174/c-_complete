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
    
int arr[100];
for(int i=0;i!=100;){
arr[i]=rand()/1000;
i++;
}
for(int i=0;i!=100;){
cout<<arr[i] <<'	';
 i++;
}
cout<<endl;
cout<<endl;
for(int i=0, j=1;j<100,i<99;){

    if(arr[i]==11){
        cout<< i;
        return 0;

    }
    if(arr[j]==11){
        cout<<i;
        return 0;
    }


    j=j+2;
    i=i+2;
}
cout<<-1;
    return 0;
}