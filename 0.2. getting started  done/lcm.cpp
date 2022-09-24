#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if(a==0){
        return b;
    }
    gcd(b%a,a);
}
// lcm=product/gcd;
int main(){
   int a,b;
   cin>>a>>b;
   for(int i=max(a,b);true;i++){
        if(i%a==0&&i%b==0){
            cout<<i<<endl;
            break;
        }
   }
   cout<<(a*b)/gcd(a,b);
  return 0;
}
