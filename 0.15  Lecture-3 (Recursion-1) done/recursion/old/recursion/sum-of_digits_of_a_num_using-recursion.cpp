#include <iostream>
using namespace std;

int f( int n)
{
    if (n==0){return 0;}
    int p=(n%10);
    n=n/10;
    return (p+f(n));
}

int main()
{
    int n;
    cin>>n;
    int k=f(n);
    cout<<k<<endl;
    
    return 0;
}