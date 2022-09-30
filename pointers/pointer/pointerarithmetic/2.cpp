#include <iostream>
using namespace std;

int main()
{
    int *p;
    cout<<p<<endl;
    p=p+1;// this means adding 4 bytes of data in the variable
    cout<<p<<endl;
    cout<<p+2 <<endl;// will add 8 bytes


    cout<<p-2 <<endl<<endl;// will subtract 8 bytes 

    char k='2';
    char *point4=&k;
    cout<<point4<<endl;
    cout<<point4+1<<endl;

    double *p5;
     cout<<p5<<endl;
    cout<<p5+1<<endl;


    // these do not make sence to add in pointer here it will be useful in the case of arrays
    // we can also ask p1<p2 comparison which will make sence for array only
    return 0;
}