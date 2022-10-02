#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {4, 4, 4, 4, 22, 22, 5, 55, 6, 6, 6, 9, 15, 8, 8};
    for (auto &item : v){
        cout << item << " ";
    }
    // ordered map store elements in the sorted array of keys (by default increasing order)
    // key is the element of array
    // val is pair of frq,prioty

    unordered_map<int, pair<int, int>> mp;
    int priority = 0;

    for (auto item : v){
        if (mp.count(item) > 0){
            pair<int, int>pairme= {mp[item].first+1, priority};
            mp.erase(item);
            pair<int, pair<int, int>> p (item,pairme);
            mp.insert(p);
        }else{
            pair<int, int>pairme= {1, priority};
            pair<int, pair<int, int>> p (item,pairme);
            mp.insert(p);
        }
        priority++;
    }
    cout << endl<< endl;

    vector<pair<int,pair<int,int>>>sort_v;
    for(auto item:mp){
        sort_v.push_back(item);
        cout<< item.first<<"     ["<<item.second.first<<" "<<item.second.second<<" ]"<<endl;
        
    }
    sort(sort_v.begin(),sort_v.end(),*[](pair<int,pair<int,int>> p1,pair<int,pair<int,int>>p2){
        if(p1.second.first==p2.second.first){
            return p1.second.second<p2.second.second;
        }
        return p1.second.first>p2.second.first;
        
    });

    cout<<endl<<endl;

    for(auto item: sort_v){
         cout<< item.first<<"     ["<<item.second.first<<" "<<item.second.second<<" ]"<<endl;
    }



    return 0;
}
