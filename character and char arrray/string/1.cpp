#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    string a;
    cin>>a;
    a.capacity();
    // vector<int>p;
    int p;
    // cout<<a[1]<<endl;
    for(int i=0;i<sizeof(a);i++){
    if(a[i]==',') 
    {
        p=i;   
        // continue;
    }   

a=(a,p,sizeof(a));
    cout<<a<<endl;
    }


    return 0;
}