#include<bits/stdc++.h>
using namespace std;


// template<class t>    =>typename can be repalced by class

template<typename t>
t has(t argu1){
    return argu1;
}

int main(){
    cout<<has<int>(5);
}