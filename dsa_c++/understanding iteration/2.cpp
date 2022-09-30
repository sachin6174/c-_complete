//solving factorial through loop 

#include <iostream>
using namespace std;

int main()
{
    //while loop used
    /*
    int k;
    cin>>k;
    int i = k-1;

    while ( i>0 )
    {
        k=k*i;
        i--;
    }
    cout<<k<<endl;
    */

    int k;
    cin>>k;
    int i = k-1;
    
    do
    {
       k=k*i;
        i--;
    } while (i>0);
    cout<<k<<endl;
    return 0;
    // used do while



    /*
    int k;
    cin>>k;
    for (int i = k-1; i>0 ; )
    {
        k=k*i;
        i--;
    }
    cout<<k<<endl;
    return 0;
    */// for loop used
}