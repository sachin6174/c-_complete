#include <iostream>
//2,147,483,647
using namespace std;
// using iteration

// int bs(int a[],int n,int x){

   
// }

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
    int p=0;
while(start<=end){
    
   int  mid=start+((end-start)/2);// to `avoid int overflow
    if(a[mid]==x){ p=p+mid;         }

    
    else if(a[mid]>x){  end=mid-1;    }


    else{ start =mid+1; }//a[mid]<x

}
cout <<p;
// return -1;
// cout<< -1;

}