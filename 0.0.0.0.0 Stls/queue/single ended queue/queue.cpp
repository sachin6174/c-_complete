#include<bits/stdc++.h>
using namespace std;


// pop swap emplace push front back  size empty

int main(){
   queue<int> q;
   q.emplace(5);
   q.emplace(7);
  //  cout<<q.front();
   while(!q.empty()){
    cout<<q.front()<<endl;
    q.pop();
   }
   cout<<q.back();// to get back 
  return 0;
}
