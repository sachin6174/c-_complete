#include<bits/stdc++.h>
using namespace std;


void toh(int n,char A,char B,char C){
    if(n==1){
        cout<<A <<" to "<<B<<endl;
        return;
    }
    toh(n-1,A,C,B);
    cout<<A <<" to "<<B <<endl;
    toh(n-1,C,B,A);
}


int main (){
    int n;
    cin>>n;
    toh(n,'A','B','C');
}