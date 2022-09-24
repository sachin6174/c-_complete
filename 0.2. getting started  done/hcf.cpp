#include<bits/stdc++.h>
using namespace std;

// recursive
int gcd(int a,int b){
    if(a==0){
        return b;
    }
    gcd(b%a,a);
}

int main(){
    int a,b;
    cin>>a>>b;
    // do a question mathematically it would be easy to write code
    int temp;
    while(a!=0){
        temp=a;
        a=b%a;
        b=temp;
        // cout<<a<<"  "<<b<<endl;
    }
    cout<<b<<endl;
    cout<<gcd(12,18)<<endl;
    
  return 0;
}
