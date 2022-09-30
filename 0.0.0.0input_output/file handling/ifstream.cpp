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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
     // Creation of ifstream class object to read the file
    ifstream fin;
 
    // by default open mode = ios::in mode
    fin.open("input.txt");
    
 
    // Execute a loop until EOF (End of File)
    while (fin) {
 
        // Read a Line from File
        // getline(fin, "input.txt");
 
        // Print line in Console
        // cout << l << endl;
    }
 
    // Close the file
    fin.close();

    return 0;
}