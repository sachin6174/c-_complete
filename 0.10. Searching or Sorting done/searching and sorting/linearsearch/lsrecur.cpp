#include <iostream>
//2,147,483,647
using namespace std;

// int linerarrecur(int* a,int n,int x){
//     if(n==0){
//         return -1;
//     }
//     int temp=a[0];
//     int small=linerarrecur(a+1,n-1,x);
//     if(a[0]==x){
//         return 0;
//     }
//     else{
//         if (small+1==n-1){
//             return -1;
//         }
//         else
//         return small+1;
//     }
    
    
// }
int recursion1(int* a,int n,int x){
    if(n==0){
        return -1;

    }
    int temp=a[n-1];
    int small=recursion1(a, n-1, x);
    if(temp==x){
        return n-1;
    }
    return small;

}

int main()
{
   int a[]={1,23,3,4};
   int n= sizeof(a)/sizeof(int);
   int  x;
   cin>>x;
  cout<< recursion1(a,n,x); 
    return 0;
}