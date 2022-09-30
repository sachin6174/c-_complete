#include <iostream>
using namespace std;
int main();// we an also prototype the main function//but there is no need to prototype  a function in 
int sum(int a[] /* so write this as int *a;  at int a[]; */, int sizeOfArray)
{
    cout << sizeof(a) << endl; /*it will give 4 as size of pointer*/
    return 0;
}
int main()
{
    int a[10];
    cout << sizeof(a) << endl; /*//it will give 40*/
    sum(a, 10);
    return 0;
}