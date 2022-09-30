#include <iostream>
#include<vector>

//2,147,483,647
//non sorted
//a[]={2,6,1,6,8,3,6,2,6,0,4,-2}
//sorted 
//a[]={-5,-4,2,4,6,8,9,12,45,}
using namespace std;
#include"studentclass.h"

int main()
{
    pairk l;//l.pair();
    cout<<endl<<&l<<" "<<endl;
    cout<<sizeof(l)<<endl;
    int a(5);
    int b(a);// copy constructor// is same as int b=a;
    cout<<a<<b;
    a=b;// copy assignment operator// as constructor has been called for the a so int a(b);
    int *ad=new int(10);
    delete ad;// distructor will becalled for this delete keyword has destructor
    // distructor is called for every variable either a stackly or heaply (int ,double ,or any other data type)
    return 0;
}