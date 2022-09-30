#include <iostream>
using namespace std;

int main()
{
    int *a;
cout<<sizeof(a)<<endl;
cout<<&a<<endl;//0x61ff0c =6,422,284
cout<<int(&a);//0x61ff0c =6,422,284
    return 0;
}