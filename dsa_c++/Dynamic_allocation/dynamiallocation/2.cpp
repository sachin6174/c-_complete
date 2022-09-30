#include <iostream>
using namespace std;

int main()
{
    int *p= new int[200000];
    //p act just like name for array with limited features

    cout<<p<<endl;
    cout<<*p<<endl;//there is no concept of garbadge value in heap memory
    // so it will just store zero in location
    *p=10;
    cout<<*p<<endl;
    cout<<sizeof(p)<<endl;//size of pointer which is stored in stack memory
    cout<<*(p+1)<<endl;
    p[0]=12;
    p[1]=15;
    cout<<*p<<endl;
    cout<<p[1]<<endl;





    return 0;
}