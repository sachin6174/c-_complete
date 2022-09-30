#include <iostream>
using namespace std;
int function(int a[],int n,int x){
    if(n==0){return -1;}
    int smalloutput=function(a+1,n-1,x);
    if(a[0]==x){return 0;}

    if(smalloutput==-1){
        return -1;  
    }else
    {return (smalloutput+1);}
}

void cinarray(int a[],int n){
for (int  i = 0; i < n; i++)
{
    cin>>a[i];
}

}


int main()
{
    int n,x;
    
    cin>>n>>x;
    int a[n];// this should be decleared at the end after taking unput of n from  the user

    cinarray(a,n);
   cout<< function(a,n,x);

    
    return 0;
}