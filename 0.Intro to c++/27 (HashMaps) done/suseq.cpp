#include<bits/stdc++.h>
using namespace std;

int bit(int i,int j){
     int mask=(1<<j-1);
     if(i&mask==1){
        return 1;
     }else{
        return 0;
     }
}

int main(){
   string a="abcd";
   for(int i=0;i<16;i++){
        for(int j=4;j>=1;j--){
            int mybit=bit(i,j);
            if(mybit==1){
                cout<<a[j-1];    
            }
        }
        cout<<endl;
   }
}