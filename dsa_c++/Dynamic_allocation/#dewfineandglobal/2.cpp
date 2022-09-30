#include <iostream>
using namespace std;

int a;// global variable decleration// it is bad practice

void g(){
    a++;
    cout<<a<<endl;
}

void f()
{
    cout<<a<<endl;
    a++;
    g();
}

int main()
{
     a=10;// a already declered as int in global variable
     f();   
    return 0;
}