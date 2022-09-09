#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
    bool dp[35];
    int count=0;
    cin>>n;
    while(n!=0){
        dp[count]=bool(n%2);
        n=n/2;
        count++;
    }
    for(;count>0;){
        cout<<int(dp[count-1]);
        count--;
    }
}
