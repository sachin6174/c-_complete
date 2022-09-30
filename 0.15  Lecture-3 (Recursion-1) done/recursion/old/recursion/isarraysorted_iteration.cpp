#include <iostream>
using namespace std;

int main()
{
    int ans =0;
    int n;
    cin>>n;
    int k[n];
    for(int i=0;i<n;i++)
    { cin>>k[i];}

    for (int  i = 0; i < n-1; i++)
    {
        if (k[i]<k[i+1])
        {
            ans++;
            cout<<ans<<" ";
        }
        
    }
    // cout<<endl<<k[5]<<endl;

    cout<<endl<<endl;

    if (ans == n-1)
    {
        // cout<<"array is sorted"<<endl; 
        cout<<true<<endl;//true is 1
    }
    else{
        // cout<<"array is not sorted"<<endl;
        cout<<false<<endl;// false 0

    }

    
    return 0;
}