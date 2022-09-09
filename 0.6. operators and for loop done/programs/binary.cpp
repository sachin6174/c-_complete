#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// Write your code here
	char a;
    int count=0,val=0;bool dp[35];
    cin.get(a);
    
    while(a=='1'||a=='0'){
        if(a=='1'){
            dp[count]=1;
        }
        else{
            dp[count]=0;
        }
        
        count++;
    cin.get(a);
    } 
    for (int i = 0; i < count; i++)
    {
        cout<<dp[i]<<" ";
    }
    int i=0;
    while(count>=0){
       
        val=val+(int(dp[count-1])*(pow(2,i)));
        count--;
        i++;
    }
    cout<<val;
}

 