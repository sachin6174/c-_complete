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
int n=0;
void my_machine(int k){
    //k==10
    if(n==k){
        return;
    }
    cout<<n<<' ';n++;
    my_machine(n);
    
    
}
int i=1;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   my_machine(10); 
// cout<<"maincall "<<i<<char(10);
// i++;
// main();
    return 0;
}