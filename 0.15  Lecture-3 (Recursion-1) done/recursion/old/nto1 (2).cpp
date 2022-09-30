#include <iostream>
using namespace std;

void _1ton( int n){
    if (n==0)
    {
        return ;
    }
    cout<< n<<" ";
    _1ton(n-1);
    
    
}

int main()
{
    
    _1ton(5);
    return 0;
}