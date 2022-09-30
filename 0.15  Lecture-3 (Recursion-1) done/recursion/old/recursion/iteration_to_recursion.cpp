#include <iostream>
using namespace std;
void cinkelie(int a,int n)
{
    if (n==0)
    {
    }
    if (n==1)
    {
        cin<<a[0]
    }
    if(n>0)
    {
        cin>>a[n-2]
    }
    cinkelie(a+1[n-1],n-1);
    
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>a[i];
    // }
    
    int k= cinkelie(a,n);
    cout<<k;


    return 0;
}