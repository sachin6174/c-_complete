//top down structure programming
#include <iostream>
using namespace std;

int sum (int a, int b)
{
    int c=a+b;
    return c;
}
int main()//first program will go in main function
{
   cout<< sum(5,7) <<endl;//sum(5,7) will be replaced by return value i.e.c here in above function
    return 0;
}