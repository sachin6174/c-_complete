

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

int findSecondLargest(int *input, int n)
{
    
    set<int, greater<int> > s;
	int i=0;
    while(i<n){
        s.insert(input[i]);
        i++;
    }
    int  arr[n];
    i=0;
    set<int, greater<int> >::iterator itr;
    for (itr = s.begin(); itr != s.end(); itr++) {
        arr[i]=*itr;
        i++;
    }

    
	
    if(s.size()==0||s.size()==1){
        return INT_MIN;
    }
    return arr[1];
    
    
}

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
cout<<endl;
cout<<endl;

 cout<<findSecondLargest(arr, 100);
    return 0;
}