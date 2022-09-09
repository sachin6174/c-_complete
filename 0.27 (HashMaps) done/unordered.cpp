#include<bits/stdc++.h>
using namespace std;
int main(){
   string s;
   cin>>s;//sachin
   map<char,char> mp;
   for(int i=0;i<s.size();i++){
     mp[s[i]]++;
    // pair<char,int> a={s[i],1};
    //  mp.insert(a);
   }
    
    int maxf=0;
   for(auto it=mp.begin();it!=mp.end();it++){
        cout<<it->first<< " "<<it->second<<endl;
        maxf=max(maxf,it->second);
   }
//    cout<<maxf<<endl;
   char ans=s[0];
    for(int i=0;i<s.size();i++){
        if(mp[s[i]]==maxf){
            cout<<s[i];
            break;
        }
    }
}