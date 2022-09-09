// #ifndef sachin1
// #define sachin1




// #endif
# pragma once
#include<bits/stdc++.h>
using namespace std;
class Tr{
    public:
    char data;
    Tr**children;
    bool isterminal;

    Tr(char data){
        this->data=data;
        children=new Tr*[26];
        for(int i=0; i<26; i++){
            children[i]=NULL;
        }
        isterminal=false;
    }
};