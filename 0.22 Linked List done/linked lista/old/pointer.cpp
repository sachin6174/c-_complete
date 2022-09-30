#include <iostream>
using namespace std;

int main()
{
    int a=5;
    int *q=&a;
    int **r=&q;

    int ***b;

    cout<<a<<endl;
    cout<<*q<<endl;
    cout<<**r<<endl;


    return 0;
}