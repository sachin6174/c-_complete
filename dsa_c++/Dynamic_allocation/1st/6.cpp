#include <iostream>
using namespace std;

// wrong practice 
//going to give warning not error 
// the variable gets destroyed after the function call;
int *funct()
{
    int i=10;
    return &i;
}

int main()
{
    int l1;
    cout<<l1<<endl;


    int *p=funct();
    return 0;
}