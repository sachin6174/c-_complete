#include<bits/stdc++.h>
using namespace std;

stack<int> binary(int n){
    stack<int> s;
    if(n<0){
        stack<int> k=binary(-n);
        vector<int>v;
        while(!s.empty()){
            v.push_back()
        }
    }

    if(n==0){
        s.push(0);
    }else{
        while(n!=0){
            s.push(n%2);
            n/=2;
        }
    }
    
    while(s.size()!=32){
        s.push(0);
    }
    return s;
}

int main(){
    int n=10;
    stack<int> ans=binary(n);
    while(!ans.empty()){
        cout<<ans.top();
        ans.pop();
    }
  return 0;
}
