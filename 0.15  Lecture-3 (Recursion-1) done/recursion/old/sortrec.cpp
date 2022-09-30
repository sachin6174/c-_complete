#include <iostream>
//2,147,483,647
using namespace std;
 int p[100];
void sor(int a[], int n ){
    
    if(n==1){ 
        return ;  }

    sor(a,n-1);

    // int ca[]=a;

   

    for (int  i = 0; i < n-1; i++)
    {
       
        p[i]=min(a[i],a[n-1]);
        a[n-1]=max(a[i],a[n-1]);
        
    }
    p[n-1]=a[n-1];
    
    
    
 


}

int main()
{
    int a[]={1,2,15,7,4,4};
    int n=sizeof(a)/sizeof(int);
    sor(a,n);
    for (int  i = 0; i < n; i++)
    {
       
      cout<<p[i]<<" ";
        
    }
    
    // cout<<a[];
    return 0;
}
/*
 if (a[n-1]<=a[i])
        {
            for (int j = 0; j < n; j++)
            {
                int temp=a[j+1];
                a[j+1]=a[j];
  
              // a[j+2]=temp;
            }
            a[i]=a[n-1]    ;        
        }  */