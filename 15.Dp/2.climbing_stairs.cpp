#include<bits/stdc++.h>
using namespace std;

int path(int n){
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    return path(n-1)+path(n-2)+path(n-3);
}

int main(){
    int n;
    cin>>n;
    cout<<path(n);
}