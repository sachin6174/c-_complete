#include<bits/stdc++.h>
using namespace  std;

int print(string const &k,int s,int e){
   for(int i=s;i<=e;i++){
      cout<<k[i];
   }
   cout<<" ";
}

int main(){
   string k;
   getline(cin,k,'\n');
   k=k+" ";
   int space[100];
   int j=0;
   for(int i=0;i<k.size();i++){
      if(k[i]==' '){
         space[j++]=i;
      }
   }
   cout<<endl;
   // for(int i=0;i<j;i++){
   //    cout<<space[i]<< " ";
   // }
   int si=0;
   int ei=space[0]-1;
   for(int i=0;i<j;i++){
      print(k,si,ei);
      si=space[i]+1;
      ei=space[i+1]-1;
   }
   // cout<<k;
}