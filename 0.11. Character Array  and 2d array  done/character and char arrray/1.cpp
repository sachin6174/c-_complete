#include <iostream>
//2,147,483,647
using namespace std;

int main()
{
    char a[]="sachin\0";// wrong way of input {s,a,c,h}
    cout<<sizeof(a);
    // cout<<a.strlen();
    return 0;
}