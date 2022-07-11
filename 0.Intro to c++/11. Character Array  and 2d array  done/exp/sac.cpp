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
cout<<arr[i] <<char(9);// character 9// tab character 
 i++;
}

cout<<char(10);
cout<<char(10);
cout<<char(10);


int pointer [1];// yeha mai pointer banaya but usko apana koi memory nahi mila  is me mai ek value dal sakta hu

*pointer=12;
cout<<*pointer<<endl;
cout<<pointer<<char(10);
int *a=NULL;// is pointer me mai intezer value nahi dal sakta but  upar wale me mai int value dal sakta hu
cout<<a<<endl;
cout<<*a<<endl;
// a=15;

    return 0;
}