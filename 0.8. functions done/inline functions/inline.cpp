#include<bits/stdc++.h>
using namespace std;

inline int max (int &a,int &b){
    if(a>=b){
        return a;
    }
    return b;
}

int main(){
   
   cout<<max(4,5)<<endl;// directly passing value but recieving as alias or reference is risky as pointing to temporary address pass variables
   int a,b;
   a=0;b=90;
   cout<<max(a,b)<<endl;

   cout<<max(a,b);
  return 0;
}
