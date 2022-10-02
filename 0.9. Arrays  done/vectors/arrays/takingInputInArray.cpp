#include <iostream>
//2,147,483,647
using namespace std;

int main()
{
    int a[5];

    for ( auto i = 0; i < 6 ;i++)
    {
        // cin>>*(a+1);
        cin>>a[i];
        // cin>>i[a];

    }
    //out of range
    cout<<a[5]<<endl;
    return 0;
}