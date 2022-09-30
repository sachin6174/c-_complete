#include <iostream>
using namespace std;
int main()
{
int a=55;
a=65;
const int b=50;// thi become read only variable.
// b=6; this statement is invalid as the const can not be changed.
cout<<"The value of b "<<b<<endl;
cout<<"The value of a "<<a<<endl;
return 0;
}