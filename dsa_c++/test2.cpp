#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int k;
    if( k==2 || (n%k==0))   
    {
        return false;
    }
    else
    { 
        k++;
    }
    cout<<k<<endl;

    return 0;
}