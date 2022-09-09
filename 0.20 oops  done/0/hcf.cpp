#include <iostream>
using namespace std;

int main()
{
    int a;int b;
    cin>>a>>b;
    int p=0;
    int k= (a<=b) ? a : b;
    for (int i = k; p<1; i--)
    {
        if (a%k==0 && b%k==0)
        {
            cout<<k<<endl;
            p++;
        }
        k--;
    }
    
    
    return 0;
}