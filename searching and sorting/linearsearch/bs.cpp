#include <iostream>
//2,147,483,647
using namespace std;

 int bsiteratively(int *a, int n ,int x ){
    

    if(n==0){
        return -1;
    }
    int start=0;
     int end=n-1;//  here why it is n
      
     while (start<=end)
     { 
        int mid= (start+(end-start)/2);
        if(a[mid]=x){
            return mid;
        }
        else if(a[mid]<x){
            start=mid+1;
        }
        else if(a[mid]>x)
        {
            end=mid-1;
        }
     }
     return -1;
     
 }

int main()
{
    
    int  n , x ;
    cin>>n;
    int *a=new int [n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    

     
    cin>>x;
   cout<< bsiteratively(a,n,x);
    
    return 0;
}