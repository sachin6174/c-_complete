#include <iostream>
//2,147,483,647
using namespace std;

int main()
{
     int a[]={1,2,4,6,7,8};
    int n=sizeof(a)/sizeof(int);
     int p[100];
     int temp1= 5;

int i;
    for (  i = 0; i < n; i++)
    {
       
       if (a[i]<=temp1)
       {
         p[i]=a[i];
       }
       
       
        if (temp1<a[i])
        {
          // int te=;
          p[i]=temp1;
         temp1=a[i];
          
        }
        // a[n-1]=max(a[i],b[0]);
    }
  p[n]=temp1;


    for (int  i = 0; i < n+1; i++)
    {
       
      cout<<p[i]<<" ";
        
    }


    
    return 0;
}