//when the new function is created below the main function
// we can make actual and formal parameter as same.
#include <iostream>
using namespace std;
//function prototype syntax:
//type functionname (arguments); // as below you can see
int sum (int a, int b);// this means that you can find function below
// int sum (int a, int b);  acceptable
//int sum (int a, b);  not acceptable;
//int sum (int , int );// acceptable

int main()
{
    int num1,num2;
    cin>>num1;
    cin>>num2;
    //num1 and num2 are actual parameters

    cout<< sum(num1,num2) <<endl;//sum(5,7) will be replaced by return value i.e.c here in above function
    return 0;   
}
int sum (int a, int b)// we will paste this line with ; at above main function this thing is called function prototype.
{
    //a,b here are formal parameters
    //a, b the formal parametersaand b will be taking values from actual parameters numnum1 and num2;
    int c=a+b;
    return c;
}