#include <iostream>
using namespace std;

int indexofnum(int k[],int n,int p,int ans){

    if (n==0){ return -1;}
    if(k[0]==p){ return ans+1;}
    indexofnum(k+1,n-1,p,ans+1);
}

int main()
{
    int n;
    cin>>n;
    int k[n];
    for(int i=0;i<n;i++)
    { cin>>k[i];}

    cout<<endl<<endl;
    int p;// which no index u want
    cin>>p;

    int   ans=-1;
    int l=indexofnum(k,n,p,ans);
    cout<<l<<endl;
    
    return 0;
    return 0;
}