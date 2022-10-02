#include <iostream>
//2,147,483,647
using namespace std;

int main()
{
    int *p=0;// storing address of nothing or no  value
    int *l=NULL;// storing address of nothing or no  value
    //both null and 0 can be used to initilize address to null or no address

    int a[10];
    cout<<a<<endl;// address of o th element (acts as a value and variable both)
    cout<<&a;// there is not a seperate memory allocation for a
    // a acts as pointer but a pointer can not be changed
    return 0;
}