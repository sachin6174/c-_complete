#include <iostream>
//2,147,483,647
using namespace std;

int main()
{
    int* p= new int [100];
    cout<<int(&p)<<endl;
    cout<<int(&(*p))<<endl;
    *p=3; 
    *(p+1)=23;
    cout<<*p+1<<endl;
    cout<<p[0]<<endl;
    cout<<p[1]<<endl;

    cout<<1[p];// value of 1st index enement
    cout<<*(p+1);// value of 1st index enement



    // playing with p

    cout<<endl<<int (&p)<<endl;//stack 
    cout<<endl<<int(&p+1)<<endl;//stack
   
    return 0;
}