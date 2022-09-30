#include <iostream>
//2,147,483,647
using namespace std;

int main()
{
    

    int a[]={1,2,4,5,5,7,8};
    int b[]={3};
    int n=sizeof(a)/sizeof(int);
 int p[100];

    for (int  i = 0; i < n; i++)
    {
       
        p[i]=min(a[i],b[0]);
        if (b[0]<a[i])
        {
          b[0]=a[i];
        }
        
        // a[n-1]=max(a[i],b[0]);
        
    }
  p[n]=b[0];
    

    for (int  i = 0; i < n+1; i++)
    {
       
      cout<<p[i]<<" ";
        
    }
    
    return 0;
}