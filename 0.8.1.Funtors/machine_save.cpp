#include<bits/stdc++.h>
using namespace std;



        //     int r=0;
        //   for(int i=31;i>=0;i--){
            
        //         int sum=0;
        //         if(i==31){
        //             sum=r+v[i]+1;

        //         }else{
        //             sum+=r+v[i];
        //         }
        //         if(sum==2){
        //             v[i]=0;
        //             r=1;
        //         }else if(sum==1) {
        //             v[i]=1;
        //             r=0;
        //         }else if(sum==0){
        //             v[i]=0;
        //             r=0;
        //         }
        //   }  

vector<int> machine(int n){
    vector<int> v(32);
    int i;
    int original=n;
    n=abs(n);
    for(i=31;n>0;i--){
        v[i]=n%2;
        n/=2;
    }
    for(;i>=0;i--){
        v[i]=0;
    }

    if(original<0){
        for(int i=31;i>=0;i--){
            if(v[i]==0){
                v[i]=1;
            }else{
                v[i]=0;
            }
        }
        int r=1;
        for(int i=31;i>=0;i--){
            int sum=r+v[i];
            if(sum==2){
                v[i]=0;
                r=1;
            }else {
                v[i]=sum;
                r=0;
            }
        }
    }
return v;
}

int main(){
   int n;
   cin>>n;
   vector<int>ans=machine(n);
   for(auto & item:ans){
    cout<<item;
   }
   cout<<endl;
  return 0;
}
