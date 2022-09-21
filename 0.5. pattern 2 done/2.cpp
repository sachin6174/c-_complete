#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int p=n;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<p;
        }
        p--;
        cout<<endl;
    }
  return 0;
}
