#include <iostream>
using namespace std;

int main()
{
    int a=5;//a=*b=*(*c)
    int* b=&a;//b=*c
    int* * c= &b;

    cout<<a<<endl;// 5
    // cout<<*a<<endl;//a pointer nahi haui to wo kisi ko wardan nahi de sakta
    cout<<&a<<endl;//hexadecimal
    cout<<int(&a)<<endl;//intezer
    cout<<*b<<endl;//5
    cout<<**c<<endl;//5
    cout<<&(**c)<<endl;//address of a
    cout<<b<<endl;//address of a
    cout<<&b<<endl;//address of b
    cout<<*(&b)<<endl;// address of a //it is like maths
    cout<<&c<<endl;// address of c 
    cout<<c<<endl;//address of b
    
    return 0;
}