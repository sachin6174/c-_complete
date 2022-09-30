#include <iostream>
//2,147,483,647
using namespace std;


int lsr ( int *a,int n,int x){
    
    if (n==0)
    {
        return -1;
    }
    
    if (a[0]==x)
    {
        return 0;
    }
    int small =lsr ( a+1, n-1, x);
    if ( small+1==-1)
    {
        cout<<small;
    }
    
        return small+1;
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
   
    
    cout<<lsr(a,n,4);
    return 0;
}