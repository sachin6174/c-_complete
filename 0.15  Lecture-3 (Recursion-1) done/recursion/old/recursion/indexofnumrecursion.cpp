#include <iostream>
using namespace std;

int indexofnum(int k[],int n,int p)
{
    if (n==0){ return -1;}
    // if (n==1){return 0;}
    if (k[0]==p)
    {
        return 0;
    }
    
       
    int t=indexofnum(k+1,n-1,p);

    if (t==-1)
    {
        return -1;  
    }
    if(t>-1)
    {return t+1;}

    return t;
    
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

    
    int l=indexofnum(k,n,p);
    cout<<l<<endl;
    
    return 0;
}