#include <iostream>
using namespace std;

int main()
{
    int a=5;int b=6;
    cout<<"value of a : "<<a<<endl;
    cout<<"value of b : "<<b<<endl;


    a=a+b;//11
    b=a-b;//b to a ban chuka hai
    a=(a-b);

        cout<<"value of a : "<<a<<endl;
    cout<<"value of b : "<<b<<endl;
    
    return 0;
}