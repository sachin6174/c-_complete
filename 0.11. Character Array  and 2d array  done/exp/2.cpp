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
// iostream cin;

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
cout<<char(10);
cout<<char(10);
cout<<char(10);
char p[1000];
// cin>>p;// cin for characeter stops taking input where it encountrs tab ,space or  enter 
// cin.getline(p,12);// it breaks on enter  and will take 12-1 characters and at the last it should be placed with null characters
cin.getline(p,120,'^');// it breaks on enter  
cout<<p<<endl;
    return 0;
}