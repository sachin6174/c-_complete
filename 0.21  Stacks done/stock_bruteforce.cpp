#include<bits/stdc++.h>
using namespace std;

/*
      int j=i-1; 
        int count=1;
        while(true){
            if(j<0||a[j]>a[i]){
                break;
            }
            count++;
            j--;
        }

*/

int main(){
   int a[]={60 ,70 ,80 ,100 ,90 ,75 ,80 ,120};
   vector<int> v;
   v.push_back(1);
   for(int i=1;i<8;i++){
        int count=1;
        for(int j=i-1;j>=0&&a[j]<a[i];j--){
            count++;
        }
        v.push_back(count);
   }
   for(auto & item: v){
    cout<<item<<endl;
   }
  return 0;
}
