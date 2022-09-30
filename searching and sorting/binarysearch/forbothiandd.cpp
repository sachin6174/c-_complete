#include <iostream>
//2,147,483,647
using namespace std;
// order agnostic search

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


int binrecursioni(int a[],int n,int start,int end,int x)

{
    while(start<=end){
       int mid=start+((end-start)/2);
    if(a[mid]==x){return mid;}
             

    
    if(a[mid]>x){end=mid-1;
   return  binrecursioni(a,n/2,start,end,x);
    }
         


    else{start =mid+1;
   return  binrecursioni(a,n/2,start,end,x);
    
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

    if(n==0){ cout<<"-1";}
    if(n==1){ cout<<a[0];}
   
 if(n>1)
 {if(a[0]<a[1])
{
 cout<<binrecursioni(a,n,start,end,x);
}
if(a[0]>a[1])
{
 cout<<binrecursiond(a,n,start,end,x);
}
}
    
    return 0;
}