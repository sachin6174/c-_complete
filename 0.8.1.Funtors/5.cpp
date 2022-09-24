#include<bits/stdc++.h>
using namespace std;

class compare{
    public:
    bool operator()(int a1,int a2){
        return a1>a2;
    }
};

int main(){
   int arr[]={8,7,6,5,4,3,2};
   sort(arr,arr+7,compare());
    for(auto& item:arr){
        cout<<item<<" ";
    }
  return 0;
}