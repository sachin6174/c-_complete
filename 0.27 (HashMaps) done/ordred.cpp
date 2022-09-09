#include<bits/stdc++.h>
using namespace std;
int main(){
   string s;
    cin>>s;
    set<char>se;
    for(int i=0;i<s.size();i++){
        se.insert(s[i]);
    }
    string ans;
    for( auto it =se.begin();it!=se.end();it++){
        // cout<<*(it)<<endl;
        ans.push_back(*it);
    }
    cout<<ans;
}