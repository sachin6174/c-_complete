#include<bits/stdc++.h>
using namespace std;

class obj{
    T Data;
    int type;
    public:
    obj(T data ,int type){
        this->Data=data;
        this->type=type;
    }
};

int main(){
    /*
        1>intrger
        2>char
        3>float
        4>double
        5>string
    */
   
   void *ptr;
   vector<void*>v;
   for(int i=0;i<5;i++){
        int type;
        cin>>type;
        string s;
        cin>>s;
        stringstream sso;
        sso<<s;
        obj dat(type)
        
   }
   
   
  return 0;
}
