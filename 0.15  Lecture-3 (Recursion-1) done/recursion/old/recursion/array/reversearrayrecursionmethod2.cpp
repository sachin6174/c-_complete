#include <iostream>
using namespace std;

void funct (int a[],int n,int start,int end)
{
    if (n==0){return;}
    if (n==1)
    {
    cout<<a[end];
    return;
    }
    if (n>1)
    {
    int temp=a[start];
    a[start]=a[end];
    a[end]=temp;
    }
    
    
    funct(a,n-2,start+1,end-1);
    
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int start =0;
    int end=n-1;
    funct(a,n,start,end);
    
    return 0;
}