#include<iostream>
using namespace std;
#include <climits>
#include <bits/stdc++.h>

int main(){
    
    // Write your code here

    
    int n,lar=INT_MIN,i=1,prmax=INT_MIN;
    cin>>n;
    if(n==0){
        cout<<INT_MIN;
        return 0;
    }
    
    int no;
    cin>>no;
     if(n==1){
        cout<<min(no,INT_MIN);
        return 0;
    }
    while(i<=n-1){
        lar=max(lar,no);
        prmax=min(no,lar);
        i++;
        cin>>no; 
        
    }
    cout<<prmax;
    
}


