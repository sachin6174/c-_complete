#include <iostream>
//2,147,483,647
//non sorted
//a[]={2,6,1,6,8,3,6,2,6,0,4,-2}
//sorted 
//a[]={-5,-4,2,4,6,8,9,12,45,}
using namespace std;

long long int fib_dp(int n){

    long long int *a=new long long int [n+1];
    a[0]=0;
    a[1]=1;
    for (int i = 2; i < n+1; i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    return a[n];
    

}

int main()
{
    int i=0;
    // for (auto i = 100;i<200 ;i++ )
    // {
    //     if (fib_dp(i)<0)
    //     {
    //         cout<<i;
    //         break;
    //     }    
    // }
    cout<<fib_dp(103)<<endl;
    cout<<fib_dp(104)<<endl;
    
        
    
    return 0;
}