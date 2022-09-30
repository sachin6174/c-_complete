#include <iostream>
//2,147,483,647
using namespace std;
//#define p;   for(int i=0;i<n;i++){  cout<<p[i]<<" ";  }
#include<algorithm>

void sorta(int* a, int n, int b[],int m){
    if(n==1||0){ return ;}
    int lastElementOfA=a[n-1];
    sorta(a,n-1,b,m);
    int p;
    for (int i = 0; i < m; i++)
    {
        if(a[i]>=lastElementOfA)
        {
            b[i]=lastElementOfA;
            b[i+1]=a[i];
            p=i;
            break;

        }
        else{
            b[i]=a[i];
        }

    }
    for (int i = p+1; i < m; i++)
    {
        b[i]=a[i-1];
    }
    



    


}
// void putatrightpos(int p,){

    
// }

int main()
{
    int a[]={5,4,3,2,1};
    int n=5;
    int m=5;
    int b[m];// my sorted arry

   // sort(a,a+n); stl sort in 
    

    sorta(a,n,b,m);
    for(int i=0;i<n;i++){  cout<<b[i]<<" ";  }
    return 0;
}