//using typedef keyword in structures
#include <iostream>
using namespace std;

typedef struct employee
{
    int id;//4
    char favchar;//1
    float salary;//4
    //9 bytes memory in use.
}ep;

int main()
{
    //struct employee sachin; line now can be replaced by ep sachin  .
    ep sachin;
    sachin.id=12;
    cout<<sachin.id<<endl;
    return 0;
}