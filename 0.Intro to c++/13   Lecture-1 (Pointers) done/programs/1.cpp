#include <iostream>
#include <vector>
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <cmath>
#include <atomic>

using std::cerr;
using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::string;
using std::vector;
#include <stdio.h>
// compile://g++ test_code.cpp
// run://a.exe < input.txt > output.txt
//  #include<bits/stdc++.h>
#define ll long long
#define vec vector
#define ar array
// just Throw hash map
// Pick the global decleration
// delete the dynamic allocation
// os_base::sync_with_stdio(0);
// cin.tie(0);
using namespace std;

void my_machine(int a)
{
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    my_machine(5);
    int p;
    cout << &(p) << endl; // it is just sa function which give the address of  a variable

    int *l = &p;
    cout << sizeof(p)<<'\n';
    cout << *(l); // just a function which gives the value on the address stored in the pointer l
    
    int *j=0x0;//accesing address by writhing
    int *m=0;// again acting as the null pointer
    int *k=NULL;// smae null pointer
    return 0;
}