#include<bits/stdc++.h>
using namespace std;

int area(int r){
    return 3.14*r*r;
}
int circumference(int r){
    return 3.14*2*r;
}
int diameter(int r){
    return 2*r;
}

vector<int> claculator1(vector<int> radius,int (*logic)(int)){
    vector <int>ans;
    for(int i=0;i<radius.size();i++){
        ans.push_back(logic(radius[i]));
    }
    return ans;
}

int main(){
   vector<int> radius(5,10);
   for(int i=0;i<5;i++){
        radius[i]=i;
   }
    int(*ptr)(int);// function ptr
    ptr=area;
    vector<int> ans=claculator1(radius,ptr);
    for( auto & item : ans){
        cout<<item<<" ";
    }
    cout<<endl;
  return 0;
}
