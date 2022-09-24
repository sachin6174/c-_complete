#include<bits/stdc++.h>
using namespace std;

/*

1 5
2 4
3 8
5 7
8 12
6 9

*/
int main(){
   int n=6;
//    cin>>n;
    vector<pair<int,int>> v;
   for(int i=0;i<n;i++){
        int entry;
        int exit;
        //start=1
        //end=0
        cin>>entry>>exit;
        pair<int,int>p1(entry,1);
        pair<int,int>p0(exit,0);


        v.push_back(p1);
        v.push_back(p0);
   }
   sort(v.begin(),v.end(),*[](pair<int,int> p1,pair<int,int>p2){
        return p1.first<p2.first;
   });
    int maxi=INT_MIN;
    int current=0;
   for(int i=0;i<v.size();i++){
        if(v[i].second==1){
            current++;
        }else{
            current--;
        }
        maxi=max(current,maxi);
   }
   cout<<maxi<<endl;

  return 0;
}
