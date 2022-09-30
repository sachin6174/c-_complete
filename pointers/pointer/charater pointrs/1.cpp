#include <iostream>
using namespace std;

int main()
{
    int a[12];
    cout<<a<<endl;// a is pointer
    for (int  i = 0; i < 12; i++)
    {
        
        cout<<a[i]<<endl;
        // (*a)++;
    }
    cout<<(*(a+1))<<endl<<endl;

    return 0;
}