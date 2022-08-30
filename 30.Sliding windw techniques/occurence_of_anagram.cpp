#include<bits/stdc++.h>
using namespace std;

int main(){
    string input="fosrfosforfsdfasdfadsfforforor";
    string word="for";

    unordered_map<int,int>mpinput;
    for(int i=0;i<input.size();i++){
        mpinput[input[i]]++;
    }
    
    unordered_map<int,int>mpword;
    for(int i=0;i<word.size();i++){
        mpword[word[i]]++;
    }



    int count=0;
    unordered_map<int,int>tempmap;
    for(int i=0,j=word.size()-1;i<input.size()-word.size()+1;i++,j++){
        if(i==0){
            for(int z=0;z<word.size();z++){
                tempmap[input[z]]++;
            }
        }else{
            tempmap[input[i-1]]--;
            tempmap[input[j]]++;
        }

        bool match=true;
        for(auto it=mpword.begin();it!=mpword.end();it++){
            if(tempmap[it->first]!=it->second){
                match=false;
            }
        }
        if(match){
            count++;
        }

        for(int z=i;z<j+1;z++){
            cout<<input[z]<<" ";

        }
        cout<<endl;
   }
   cout<<count;
  return 0;
}
