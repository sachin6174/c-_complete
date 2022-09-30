#include <iostream>
using namespace std;

void nto1( int n){
    if (n==0)
    {
        return;
    }
    nto1(n-1);
    cout<< n<<" ";
    
    
}

int main()
{
    
    nto1(5);
    return 0;
}