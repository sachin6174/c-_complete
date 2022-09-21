#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   vector<pair<int,int>> rectangles;
   for(int i=0;i<n;i++){
        int s,f;
        cin>>f;
        cin>>s;
        pair<int,int>p(f,s);
        rectangles.push_back(p);
   }
   vector<int>areas;
   for(int i=0;i<rectangles.size();i++){
    areas.push_back((rectangles[i].first)*(rectangles[i].second));
   }
//    for(auto & item: areas){
//     cout<<item<<" ";
//    }
    for(int i=0;i<areas.size();i++){
        cout<<areas[i] << " ";
    }
  return 0;
}
