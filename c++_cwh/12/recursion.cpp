#include <iostream>
using namespace std;

int factorial (int n)
{
    if(n<=1){              /*this is base condition*/
        return 1;
    }
    return n*factorial(n-1);
    
}
//step bystep calculation of factorial 5
//factorial(5)=5*factorial(4)
//factorial(4)=5*4*factorial(3)
//factorial(3)=5*4*3*factorial(2)
//factorial(2)=5*4*3*2*factorial(1)
//factorial(5)=5*4*3*2*1
//factorial(5)=120

int main()
{
    int a;
    cout<<"Enter a value:";
    cin>>a;
    cout<<factorial(a)<<endl;
    
    return 0;
}