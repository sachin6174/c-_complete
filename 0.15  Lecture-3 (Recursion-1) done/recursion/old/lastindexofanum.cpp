#include <iostream>
using namespace std;

int lastindex(int a[],int  n, int x){
    if(n==0){return -1;}
    int ans=lastindex(a+1,n-1, x);
    if (a[0]==x)
    {
      return 0;
    }
    return n-(ans+1);
    
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
    int x;
    cin>>x;
    cout<<lastindex(a,n,x)<<endl;
}