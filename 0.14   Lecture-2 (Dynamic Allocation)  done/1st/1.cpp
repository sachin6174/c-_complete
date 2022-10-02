#include <iostream>
using namespace std;

int main()
{
    int a=5;
    int &b=a;//b is here called as reference variable
    a++;
    cout<<a<<endl;
    cout<<b<<endl;//sun b hamare aage kisi ki nahi chalti ho gaya na tu bhi 6

    b=10;
    int k=b;
    cout<<a<<endl;
    cout<<k<<endl;    
    
    return 0;
}