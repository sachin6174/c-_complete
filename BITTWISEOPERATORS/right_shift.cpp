#include <iostream>
//2,147,483,647
using namespace std;

int main()
{
    int a=1235; //valid for int  a 
    cout<<(a>>3);// not valid for double a

    // it will give a intezer or decimal values will be neglected
    
    return 0;
}