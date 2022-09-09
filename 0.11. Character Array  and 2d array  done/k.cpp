//#include <iostream>
#include<stdio.h>
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
  
string getCompressedString(string &input) {
    
 string p;
    int size=input.size();
    int i=0;
    int arr[257]={0};
    while(i<257){
        arr[i++]=48;
    }

    // Write your code here.
   i=0;
    while(i<size){
        arr[input[i]]++;
        // cout<<char(arr[input[i]])<<' ';
        i++;
    }
    i=0;
    while(i<size){
        if(arr[input[i]]>49){

            p.push_back(input[i]);
            // cout<<char(arr[input[ i]])<<endl;
            p.push_back(char(arr[input[i]]));
            arr[input[i]]=48;

        }else if(arr[input[i]]==49){
            p.push_back(input[i]);
        }
        i++;
    }
    return p;
}

int main() {
    int size = 1e6;
    string str;
    cin >> str;
    str = getCompressedString(str);
    cout << str << endl;
}