#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   for(int i=1;i<=(n+1)/2;i++){
        for(int j=1;j<=(n+1)/2-i;j++){
            cout<<'.';
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<'*';
        }
        cout<<endl;
   }
   int p=(n-1);
   for(int i=1;i<=(n-1)/2;i++){
        for(int j=1;j<=i;j++){
            cout<<'.';
        }
        for(int j=1;j<p;j++){
            cout<<'*';
        }
        p=p-2;
        cout<<endl;
   }
    cout<<endl;
  return 0;
}
