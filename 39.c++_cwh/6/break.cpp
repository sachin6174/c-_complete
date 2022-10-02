#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 6; i++)
    {
        cout<<i<<endl;
        if(i==2)// jaise hi i ki value 2 hogi to loop se exit ho jaiga
        {
            break;
        }
    }
    
    return 0;
}