#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if (a>b){
        if(a>c){
            if(a>d)
            { cout<<a;}
            
        }
    }
    if (b>a){
        if(b>c){
            if(b>d)
            { cout<<b;}
            
        }
    }
    if (c>a){
        if(c>b){
            if(c>d)
            { cout<<c;}
            
        }
    }
    if (d>a){
        if(d>b){
            if(d>c)
            { cout<<d;}
            
        }
    }
    
    
    return 0;
}
