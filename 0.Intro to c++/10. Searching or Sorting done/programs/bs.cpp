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
    
int arr[10000];
for(int i=0;i!=10000;){
arr[i]=rand();
i++;
}
 sort(arr, arr+10000);
for(int i=0;i!=10000;){
cout<<arr[i] <<'	';
 i++;
}

cout<<char(10);
cout<<char(10);
int s=0,e=10000,mid;
for(;s<=e;){
    mid=s+(e-s)/2;
    if(arr[mid]==11){
        cout<<mid;
        return 0;
    }else if(arr[mid]<11){
        s=mid+1;
    }else{
        e=mid-1;
    }

}

cout<<-1;
    return 0;
}