//using_scope_resolution_operator_to_print_globalvariable_in_localfunction.cpp
#include <iostream>
using namespace std;
int a=50;
int main()
{
    cout<<a<<endl;//here it will print global value as at this point of time the local value for a is not decleared.
    int a=7;
    cout<<"the value of local variable a:\n"<<a<<endl;// using multiple << means cot chaning a feature of c++ language
    cout<<"the value of global variable a:\n"<<::a<<endl;//:: >> is 'scope resolution operator' used to print global variable in the loacal function

return 0;
}
