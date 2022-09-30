#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int r=0;
    for (int  i = 0; n>0; )
    {   
        r=r+(n%10);
        n=n/10;
        i++;
    }
cout<<r<<endl;    
    return 0;
}