#include <iostream>
// changing one data type into another data type
using namespace std;
int main()
{
//if we just press ctrl+c any any location of curser it will copy complete line we not need to select the things and then ctrl+c

float a=12.5;
int b=3;
//a=int(a);// can also be used like this
cout<<"enter the values "<<int(a)<<endl;//type casting can be done in int(a) and also in way (int)a
cout<<"enter the values "<<(int)a<<endl;//type casting can be done in int(a) and also in way (int)a
cout<<"enter the values "<<float(b)<<endl;
// int c= int(b); //is also a valid expression
cout<<"enter the values a+b "<<a+b<<endl;//give the floating num
cout<<"enter the values a+b "<<sizeof(a+b)<<endl;//give the floating num//4

return 0;
}