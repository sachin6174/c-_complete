#include <iostream>
using namespace std;

int main()
{
    int *p=new int;//unknown variable got memory in dynamic/heap memory
    *p=10;
    cout<<int(p)<<endl;
    cout<<*p<<endl; 

    char *l=new char;//unknown variable got memory in dynamic/heap memory
    cout<<l<<endl;// will not print garbadge string it will print null character

    double *k=new double;//unknown variable got memory in dynamic/heap memory 
    cout<<&k<<endl;// k got memory allocation in the stack memory
    cout<<k<<endl;

    return 0;
}