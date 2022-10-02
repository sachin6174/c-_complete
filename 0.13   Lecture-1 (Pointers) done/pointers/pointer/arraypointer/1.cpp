#include <iostream>
using namespace std;

int main()
{
    // theree ways to get ith element of an array a[i],i[a],*(a+i)
    int a[10];
    cout<<&a[0]<<endl;// &a[0]=a is same
    cout<<a<<endl;
    a[0]=12;
    cout<<*a<<endl;
    return 0;
}