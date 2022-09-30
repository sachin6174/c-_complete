#include <iostream>
using namespace std;

int main()
{
    char a[]="abcd";
    // char* pa="abcd"; // this operation is not allowed
    char* pa="abcd";// pa points to temporary memory abcd\0
    cout<<pa<<endl;//it will print abcd
    return 0;
}