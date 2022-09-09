#include<bits/stdc++.h>
using namespace std;

void printarray(int*a,int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
  int a[]={1,-1,2,-2,3,-3,4,-4,5,-5,6,-6};
  int size= sizeof(a)/4;
    int maxi=INT_MIN;
    int mini=INT_MAX;

  for(int i=0;i<size;i++){
        maxi=max(maxi,a[i]);
        mini=min(mini,a[i]);
  }  

  for(int i=maxi;i>=mini;i--){
    if(i>0){

            for(int j=0;j<size;j++){
                if(a[j]==i){
                    cout<<'*';
                    a[j]-=1;
                }else{
                    cout<<' ';
                }
            }


    }else if(i==0){

        for(int j=0;j<size;j++){
            if(a[j]<0){
                a[j]*=-1;
            }
            cout<<'-';
        }

    }else{

            for(int j=0;j<size;j++){
                if(a[j]>0){
                    cout<<'*';
                    a[j]-=1;
                }else{
                    cout<<' ';
                }
            }

    }
    cout<<endl;
    
  }
  return 0;
}
