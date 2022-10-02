#include<bits/stdc++.h>
using namespace std;
// int i=0;
int main(){
   vector<string>v;
   int n=8;
   cin>>n;
   int maxsizestr=0;
   for(int i=0;i<n;i++){
        string s;
        cin>>s;
        v.push_back(s);
        // if(maxsizestr<s.size()){
        //     maxsizestr=s.size();
        // }

        
   }

    sort(v.begin(),v.end(),*[](string s1,string s2){
            int k=min(s1.size(),s2.size());
            int i=0;
            for(    ;i<k;i++){
                if(s1[i]==s2[i]){
                    continue;
                }
                return s1[i]<s2[i];
            }
            char null='\0';
            if(s1.size()>s2.size()){
                // cout<<"jhf"<<endl;
                return null<s1[i];
            }else if(s1.size()<s2.size()){
                return null<s2[i];
            }
        return true;
    });
   

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
