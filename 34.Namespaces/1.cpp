//#include <iostream>
// #include<stdio.h>
//compile://g++ test_code.cpp
//run://a.exe < input.txt > output.txt
#include<bits/stdc++.h>
#define ll  long long
#define vec vector  
#define ar array  
//just Throw hash map
//Pick the global decleration
//delete the dynamic allocation
//os_base::sync_with_stdio(0); 
//cin.tie(0);  
using namespace std;

void my_machine(){

    
}

// cant call a function of a name space in side that particular name sapace 
namespace kakla{

    int   fun1(){
        return 5;
    std:: cout<<":";


    }

    // int l=fun();// can not be invoked inside that same name namespace
    
    // std:: cout<<":";
    //
    
}

int j= kakla::fun1();// can  be invoked globally but always need storage


// let try for class 

class f{
    int p;
    public:
    int fun (int p){

    }
    int j=fun(5);  
     // it need storage to save that output
    // cout<<"l"; //
};
f kapa;
int l= kapa.fun(5); ///i can not invoke   a class function globally  gives error 
    int b;
   vector<int> k;
//    k.size(); // it will not be stored anywhere so it is giving errror 
//    let store it somewhere 
int p= k.size();

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    f sachin;
    sachin.fun(5);// can be invoked inside a functio

    kakla:: fun1 ();// need not to store inside a function
    return 0;
}