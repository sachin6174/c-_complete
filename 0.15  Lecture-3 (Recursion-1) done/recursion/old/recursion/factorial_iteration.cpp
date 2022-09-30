#include <iostream>
using namespace std;

int main()
{
    int k;
    cin>>k;
    for (int i = k-1; i>0 ; )
    {
        k=k*i;
        i--;
    }
    cout<<k<<endl;

    
    return 0;
}