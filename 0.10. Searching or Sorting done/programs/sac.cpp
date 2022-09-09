//#include <iostream>
#include <stdio.h>
// compile://g++ test_code.cpp
// run://a.exe < input.txt > output.txt
#include <bits/stdc++.h>
#define ll long long
#define vec vector
#define ar array
// just Throw hash map
// Pick the global decleration
// delete the dynamic allocation
// os_base::sync_with_stdio(0);
// cin.tie(0);
using namespace std;

void my_machine()
{
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    float a{4.5};
    string v("sachin");
    char single('a');
    // c++ datatypes
    /*

                              Data types in c++
    Built-in                User Defined            Derived
    ----------              -----------             ------------
    void, int,			    structure,              array,
    char, float,		    union,					function,
    double, bool,		    enum,					pointer,
    long long			    class,					reference
    Wide Character		    typedef


    */
    /*

       Data Type 										Size
    int (Integer) = 5, 6, 7							2
    float (Floating Value) = -3.67, 2.67			4
    double (Double of float) = -7.8746				8
    char (Character) = 	'a', 'b', 'A'				1
    string (Multiple chars) = "Hello World" 		No of Chars
    bool (Boolean) = true, false					true = 1, false = 0  */

    void sachin(); // function calling syntax appears but it is like prototype
    int sach()
    {
        return 5;
    } // ek function ke andar hum ek aur functionn nahi bana sakte hai
      //    it will lead to return typr clash

    return single;
}