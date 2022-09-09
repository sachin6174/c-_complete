#include <iostream>
using namespace std;

int main()
{
    int k;
   cout<<k<<endl;//will take garbadge value
   int *ptr;//it will return garbadge address//it is just a decleared pointer
    cout<<&k<<endl;
   cout<<ptr<<endl<<endl;
    int array[]={1,2,3,4};
    cout<<array<<endl;//this will return the address of first element of array
    cout<<array+1<<endl;//this will return the address of 2nd element of array
    cout<<(array+1)<<endl;//this will return the address of first element of array

    return 0;
}