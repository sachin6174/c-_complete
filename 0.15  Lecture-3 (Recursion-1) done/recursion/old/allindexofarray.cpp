#include <iostream>
using namespace std;

int allindex(int a[],int n,int x){
    if (n==0){ return -1;}
    // int ans=0;
    // for (int  i = 0; i < n; i++)
    // {
    //     ans =ans+allindex( a+1, n-1,x);
    // if(a[0]==x){return 0;}
    // }
    // cout<<(ans+1)<<" ";

    int i;
    for (i=0 ; i < n; i++){
        if (a[i]==x){
            return  i;
        }
        cout<< " ";
    }
    
    int ans =allindex (a+1,n-1,x);
    
    return i+1;
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
    cout<<allindex(a,n,x)<<endl;
    
    return 0;
}