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

ll int  my_machine(int n){
   if(n==1){
       return 1;
   }
// my_machine(1)=1;
    return n*my_machine(n-1); 
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
// int arr[100];
// for(int i=0;i!=100;){
// arr[i]=rand()/1000;
// i++;
// }
// for(int i=0;i!=100;){
// cout<<arr[i] <<'	';
//  i++;
// }


cout<<my_machine(10);

    return 0;
}