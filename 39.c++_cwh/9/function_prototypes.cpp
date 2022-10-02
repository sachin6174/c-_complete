//when the new function is created below the main function
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
    cout<< sum(5,7) <<endl;//sum(5,7) will be replaced by return value i.e.c here in above function
    return 0;   
}
int sum (int a, int b)// we will paste this line with ; at above main function this thing is called function prototype.
{
    int c=a+b;
    return c;
}