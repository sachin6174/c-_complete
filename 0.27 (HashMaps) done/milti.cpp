#include<bits/stdc++.h>
using namespace std;
int main(){
   //freq array
   string s;
   cin>>s;
   int freq [256];
   for(int i=0;i<256;i++){
    freq[i]=0;
   }
   for(int i=0;i<s.size();i++){
        freq[s[i]]++;
   }
      for(int i=0;i<256;i++){
    cout<<freq[i]<<" ";
   }
}