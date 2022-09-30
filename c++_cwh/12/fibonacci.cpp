#include <iostream>
using namespace std;

int fibonacci(int n);//function prototype

int main()
{
    int a;
    cout<<"Entrer which term you want:";
    cin>>a;
    cout<<"The "<<a<<" th value of fibonacci sequence is "<<fibonacci(a);
    return 0;
}
int fibonacci(int n)
{
    if(n<=2)// basre condition
    {
        return 1;// a1=1,a2=1,a3=2,a4=3,a5=5 ;a6=8and so on..
    }
    return (fibonacci(n-1)+fibonacci(n-2));//recursion
}