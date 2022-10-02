#include<bits/stdc++.h>
using namespace std;

class compare{
    public:
        bool operator()(pair<int,int>p1,pair<int,int>p2){
            if(p1.second==p2.second){
                return 1;
            }else{
                return p1.second>p2.second;
            }
        }
};


int main(){
    vector<int> v = {4, 4, 4, 4, 22, 22, 5, 55, 6, 6, 6, 9, 15, 8, 8};
    map<int,int>mp;
    for(auto item:v){
        mp[item]++;
    }
    sort(mp.begin(),mp.end());
    for(auto item:mp){
        cout<<item.first<<" "<<item.second<<endl;
    }
  return 0;
}
