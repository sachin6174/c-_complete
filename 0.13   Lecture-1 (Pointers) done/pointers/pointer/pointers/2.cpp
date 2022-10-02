#include <iostream>
using namespace std;

int main()
{
    int i=5;
    int *p;
    
    cout<<sizeof(i)<<endl;
    cout<<sizeof(p)<<endl;//generally the size of a pointer is 8 bytes (basically for 64 bit architecture but this device is also a 64 bit but sill it gives me the size of pointer p as 4 bytes 
    cout<<&i<<endl;
    cout<<&p<<endl;
    p=&i;
    cout<<p<<endl;

    //ways to access value of i
    cout<<i<<endl;// through i
    cout<<*p<<endl;// through *p mens p me jis variable ka address hai uski value dede

    i++;
    cout<<i<<endl;
    cout<<*p<<endl;

    int a=i;
    cout<<&a<<endl;
    a++;// will change value at memory loaction at a but not affact the value at i 
   
   //i=*p  same thing
   int k=*p;
   cout<<&k<<endl;

   (*p)++;
   cout<<i<<endl;
    int *q=p;
    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<*q<<endl;



    return 0;
}