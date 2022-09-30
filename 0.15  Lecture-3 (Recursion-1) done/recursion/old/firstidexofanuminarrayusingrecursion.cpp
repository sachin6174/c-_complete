#include <iostream>
using namespace std;
int firstindex(int a[],int n,int x){
    if (n==0){ return -1;}
    if(a[0]==x){return 0;}
    int ans =firstindex( a+1, n-1,x);
    int k=(ans>=0) ? (ans+1) : ans;
    return k;


    
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int x;
    cin>>x;
    cout<<firstindex(a,n,x)<<endl;
    
    
    return 0;
}