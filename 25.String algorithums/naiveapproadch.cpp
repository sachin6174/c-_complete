#include<bits/stdc++.h>
using namespace std;
int main(){
   string s;
   cin>>s;
   string patetrn;
   cin>>patetrn;
   bool found=false;
   for(int i=0;i<s.size()-patetrn.size()+1;i++){
        bool matched =true;
        for(int j=0;j<patetrn.size();j++){
            if(s[i+j]!=patetrn[j]){
                matched=false;
                break;
            }
        }
        if(matched==true){
            found=true;
            break;
        }
   }
   if(found==true){
        cout<<"we got it   party  kdnsad............................";
   }else{
        cout<<"mila nahi";
   }

  return 0;
}
// abcdefghij
// hij
/*

abcdefghij
haj

*/
