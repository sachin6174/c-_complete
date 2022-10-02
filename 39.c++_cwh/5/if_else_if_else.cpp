#include <iostream>
using namespace std;
int main()
{
int age;
cout<<"tell me your age:"<<endl;
cin>>age;
cout<<"You entered "<<age<<endl;
if (age>18)
{
    cout<<"You are allowed to yhe party"<<endl;
}
else if (age==18)
{
    cout<<"you just 1 year less, so you can enjoy teenagers party."<<endl;
}
else if(age<18 && age>=0)
{
    cout<<"you are below 18 ,not allowed"<<endl;
}
else
{
    cout<<"you are not born yet."<<endl;       
}
return 0;
}