#include <iostream>
using namespace std;

int main()
{
    //&--> ampercent   address operator 
    //* --> dereference operator
    int a;
    cout<<a<<endl;//will print the garbadge value of a
    cout<<&a<<endl;// printing address of  variable a in hexadecimal no its by default

    //123=1x10^2 +2x10^1 +3x10^0
    //0x 61ff0c= 6x16^5 +1x16^4 +fx16^3+ fx16^2 +0x16^1 +cx16^0=6,422,284
    //0,1,2,3,4,5,6,7,8,9,a(10),b(11),c(12),d(13),e(14),f(15)
    //1x16^2 +2x16^1 +3x16^0

    cout<<int(&a)<<endl;//printing address of variablr a number in a intezer form
    int *p=&a;
    cout<<p<<endl;// address of a will be printed

    float b;
    float *fp=&b;
    
    double c;
    double *dp=&c;

    int k=12;
    cout<<*(&k)<<endl;
    int *pk=&k;
    cout<<*pk<<endl;


    return 0;
}