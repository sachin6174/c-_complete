#include <iostream>
//2,147,483,647
using namespace std;

int main()
{
    int a[][5]={{0}};// it is just one 1*5
    // char k='5';
    // cout<<int(k)<<endl;
    a[7][5]=7;
    a[8][8]=9;



int b[][2]={{1,2},{3,4},{5,6}};

int valueOfn=sizeof(b)/sizeof( int) /2;

cout<<sizeof(b)<<endl;// giving 24  3*2*4=24

//i,j

int single[valueOfn*2];

int i,j;
cin>>i>>j;
int indexOf2dArray=valueOfn*i+j;
cout<<(indexOf2dArray)<<endl;// will give index of straight or 1 d array formed using a 2d array
// cout<<
    



// switching off all the switches after memory location a1;
    // int a1  ;
    // cout<<int (&a1)<<endl;
    // int b1=*(&(a1)+6);
    // cout<<int (&b1)<<endl;
    // cout<<b1<<endl;
    // // // cout<<*a;
    // for (auto i = 0; i < 10; i++)
    // {
    //   *(&(a1)+i)=0; 
    //   cout<<*(&(a1)+i) <<endl;
    // }
    
    
    return 0;
}