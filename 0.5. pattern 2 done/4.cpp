#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
//    n=5
   for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<'.';
        }
        int p=i;
        for(int j=1;j<=i;j++){
            cout<<p++;
        }
        p=p-2;
        for(int j=1;j<=i-1;j++){
            cout<<p--;
        }

        cout<<endl;
   }
  return 0;
}
