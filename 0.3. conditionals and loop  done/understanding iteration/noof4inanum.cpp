#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ans=0;
    for (int i = 0; n>0; i++)
    {
        int r=n%10;
        if (r==4)
        {
            ans++;
        }
        n=n/10;
    }
    cout<<ans<<endl;
    
    return 0;
}