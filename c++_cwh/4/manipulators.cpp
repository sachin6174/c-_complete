//manupulators in c++:--//like endl, //help in controlling data display
// endl used to print in next line.
#include <iostream>
#include<iomanip>//this is a header file containing setw manipulator
using namespace std;
int main()
{
int a=1,b=12,c=123,d=1234;
cout<<"the value of a is "<<a<<endl;
cout<<"the value of b is "<<b<<endl;
cout<<"the value of c is "<<c<<endl;
cout<<"the value of d is "<<d<<endl<<endl;
/*
output
the value of a is 1
the value of b is 12
the value of c is 123
the value of d is 1234
left alligned
*/


cout<<"the value of a is "<<setw(4)<<a<<endl;
cout<<"the value of b is "<<setw(4)<<b<<endl;
cout<<"the value of c is "<<setw(4)<<c<<endl;
cout<<"the value of d is "<<setw(4)<<d<<endl;
/*
Output:
the value of a is    1// it will take width of 4
the value of b is   12
the value of c is  123
the value of d is 1234
right alligned at four decimal places
*/

return 0;
}