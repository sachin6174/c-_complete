#include<bits/stdc++.h>
using namespace std;
int main(){
  int a[]={1,5,9,2,5,10,8,0,6,7,8,2,5,9,6,2,7,2,5,2,4,0};
  int size= sizeof(a)/4;
    int maxi=INT_MIN;
  for(int i=0;i<size;i++){
        maxi=max(maxi,a[i]);
  }  

  for(int i=maxi;i>=1;i--){
    for(int j=0;j<size;j++){
        if(a[j]==i){
            cout<<'*';
            a[j]-=1;
        }else{
            cout<<' ';
        }
    }
    cout<<endl;
    
  }
  return 0;
}
