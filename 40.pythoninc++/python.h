#include <iostream>
using namespace std;
#include<bits/stdc++.h>


// input function
string input(string s){
    cin>>s;
    return s;
}

// print function
void print( string s){
    cout<<s<<endl;
}
void print( int s){
    cout<<s<<endl;
}
void print (char a){
    cout<<a<<endl;
}

//length function of string
int len(string s){
    return s.size();
}


// data types in python function
string type(int a){
    return "int";
}
string type(string a){
    return "string";
}
string type(double a){
    return "double";
}
string type(float a){
    return "double";
}

// # type casting or type conversion

// it is good
string str(int a){
    string p;
    a/10;
    // return a;
}