#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 50; i++)
    {
       
        if(i==3)
        {
            continue;
        }
         cout<<i<<endl;// just leave one iteration.
    }
    
    return 0;
}