#include <iostream>
//2,147,483,647
using namespace std;

int ls(int  *a,int n,int x) // we can also pass array as ointer and a[] also both are the same thing
{
    for (int i = 0; i < n; i++)
    {
        if (a[i]==x)
        {
             return i;
        } 
    }

    return -1;
}

int main()
{
    int a[1000];
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<ls(a,n,4);
    return 0;
}