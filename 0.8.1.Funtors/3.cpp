#include<bits/stdc++.h>
using namespace std;
int main(){
   int arr[]={8,7,6,5,4,3,2};
   sort(arr,arr+7,*[](int a1,int a2){
    if(a1==a2){
        return a1>a2;
    }
    return a1>a2;// pahle wala wada hai to decrearing order
     });
   for(auto& item:arr){
        cout<<item<<" ";
    }
  return 0;
}
