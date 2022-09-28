#include<bits/stdc++.h>
using namespace std;
// int i=0;
int main(){
   vector<string>v;
   int n=8;
//    cin>>n;
   int maxsizestr=0;
   for(int i=0;i<n;i++){
        string s;
        cin>>s;
        v.push_back(s);
        if(maxsizestr<s.size()){
            maxsizestr=s.size();
        }

        
   }
   cout<<maxsizestr<<endl;
    for(int i=0;i<maxsizestr;i++){
        sort(v.begin(),v.end(),*[](string s1,string s2){
            if(s1[0]==)
            return (s1[0])<s2[0];
        });

    }
   

   cout<<endl;
   for(auto & item: v){
    cout<<item<<endl;
   }
  return 0;
}

/*
sbji
sachin 
sackin
sacki
baki 
bati
chati 
chatr
*/
