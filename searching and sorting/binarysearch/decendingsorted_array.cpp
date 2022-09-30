#include <iostream>
//2,147,483,647
using namespace std;


int binrecursiond(int a[],int n,int start,int end,int x)

{
    while(start<=end){
       int mid=start+((end-start)/2);
    if(a[mid]==x){return mid;}
             

    
    if(a[mid]<x){end=mid-1;
   return  binrecursiond(a,n/2,start,end,x);
    }
         


    else{start =mid+1;
   return  binrecursiond(a,n/2,start,end,x);
    
    }
}
return -1;
}


int main()
{
     int n;
    cin>>n;
    int x;
    cin>>x;
     int a[n];
     for (int  i = 0; i < n; i++)
     {
         cin>>a[i];
     }
     int end=n-1;
    int start=0;

    cout<<binrecursiond(a,n,start,end,x);
  
    return 0;
}