#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        double *p= new double;
        delete p;//using delete for a single value in heap
    }
    
    return 0;
}
//we have used here delete keyword
// allocation of memory and then memory free
// it been executing 10000s of time per second
//but every time memory allocation is just 8 bytes every time.