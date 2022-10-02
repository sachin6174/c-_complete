#include <iostream>
//2,147,483,647
using namespace std;

int main()
{
    int a[3]={1,36,7};

    cout<<2[a]<<endl;
    cout<<sizeof(a)<<endl;
    int b;
    int* p= &b;
    cout<<*p<<endl;
    cout<< *a<<endl;
    cout<< *(a+1)<<endl;
    cout<< *(a+2)<<endl;
   int l=45;
     *(a+2)=10;
    cout<<*(a+2)<<endl;
    return 0;
}