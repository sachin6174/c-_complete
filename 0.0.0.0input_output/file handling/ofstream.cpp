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

#include<fstream> // having classes to read and write stuff

using namespace std;

void my_machine(){

    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ofstream k; // a classs writes on file
    k.open("a.txt");
    string l;
    // cout<<k;

     while (k) {   // so k is true 
 
        // Read a Line from standard input
        getline(cin, l);
 
        // Press -1 to exit
        if (l == "-1")
            break;
 
        // Write line in file
        k << l << endl; //  k object (file )
        cout<<l; // console out << console me l(data-or- object -variable) ko out karo
    }
 
    // Close the File
    k.close();
    
    return 0;
}