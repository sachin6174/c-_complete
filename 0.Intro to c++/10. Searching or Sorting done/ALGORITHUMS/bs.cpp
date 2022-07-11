#include <iostream>
//2,147,483,647
using namespace std;

int main()
{

    // int a=2147483647;
    // int b=1;
    // cout<<a+b<<endl;
    int n;
    cin>>n;
    int a[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    int f;
    cin>>f;
    int start= 0;
    int end=n-1;
    int mid =(start+end)/2;
    while (start<=end){

        if(a[mid] ==f){
            // return f;
            cout<<f;
         }
        else if(a[mid] >=f){
            end=mid-1;
            mid=(start+end)/2;
            if(a[mid] ==f){
            cout<<f;
         }
         }
        else if(a[mid] <=f){
             start=mid+1;
           mid =(start+end)/2;
            if(a[mid] ==f){
            // return f;
            cout<<f;
         }
         }
         else {
             return -1;
         }

    }
    return 0;
}