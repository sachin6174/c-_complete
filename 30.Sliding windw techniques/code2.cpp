#include<bits/stdc++.h>
using namespace std;
int main(){

   int v[]={1,2,55,6,8,9,3,7,9,3,7,0,23,5,78};
   int k=3;// window size
   int arrsize=15;

   int i=0;
   int j=0;
   int mini=INT_MAX;
   int maxi=INT_MIN;
   int sum=0;
   while(j<arrsize){
    cout<<j-i+1<<" ";
    sum=sum+v[j];
    if(j-i+1<k){
        j++;
    }else if(j-i+1==k){
        cout<<sum<<endl;
        maxi=max(maxi,sum);
        mini=min(mini,sum);
        sum=sum-v[i];
        i++;
        j++;
    }
    

   }

   cout<<maxi<< " "<<mini<<endl;
  return 0;
}
