//pointers in array.
#include <iostream>
using namespace std;

int main()
{
    int marks[5]={11,22,33,44,55};// decleration of array
    // here marks giges the address of first block.
    cout<<"address of first elemrnt of array marks is "<<marks<<endl<<endl;//&marks is wrong here

    int  *ptr=marks;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    ptr++;
    cout<<ptr<<endl;
    cout<<*ptr<<endl<<endl;


    cout<<*(ptr+1)<<endl;
    cout<<*(ptr+2)<<endl;
    cout<<*(ptr+3)<<endl;




    return 0;
}