#include <iostream>
//2,147,483,647
using namespace std;

int main()
{
    for (int i = 0; i < 100; i++)
    {
        cout<<(i&(i+1))<< " ";// they behave starngely very nonsence visual sence
    }
    
    return 0;
}