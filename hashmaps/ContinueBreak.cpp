#include <iostream>
//2,147,483,647
using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        if(i<2)
        
        continue;
        cout<<i<<endl;

    }
    for (int i = 0; i < 5; i++)
    {

        cout<<i<<endl;
        break;

    }

    
    
    
    return 0;
}