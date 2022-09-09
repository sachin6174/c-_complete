
#include<bits/stdc++.h>
#include"t.cpp"
#include"tr.cpp"
using namespace std;
int main(){
    T k1;
    k1.insert("sachin");
    k1.insert("good");
    cout<<k1.find("goo")<<endl;
    cout<< k1.find("sachin");
    k1.remove("sachin");
    cout<< k1.find("sachin");
    
}