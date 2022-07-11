#include <bits/stdc++.h>

using namespace std;

class hashmap{
    public:
    vector<pair<string,int>>** k=new vector<pair<string,int>>* [100005];
    int k=0;
    int hash(string key){
        int h=0;
        int p=1;
        for(int i=key.size()-1;i>=0;i++){
            h+=(key[i]*p)%100005;
            p*=13;
        }
        return h%100005;
    }
    void insert(string key,int value){
        if(k==0){
            for(int i=0;i<100005;i++){
                vector<pair<string,int>>l;
                k[i]=&l;
            }
        }
        int index= hash(key);
        pair<string ,int> p={key,value};
        k[index]->push_back(p);
    }
    bool ispresent(string key){
        int index=hash(key);
        bool p=false;
        for(int i=0;i<k[index]->size();i++ ){
            if(((*(*(k[index])))+i).first==key){

            }
        }
    }

};

int main() {
     
}