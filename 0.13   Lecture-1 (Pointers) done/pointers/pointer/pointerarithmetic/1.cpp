#include <iostream>
using namespace std;

int main()
{
    int *p1;

    char *p2;
    double *p3;
    cout <<sizeof(p1)<<endl;//size of pointer variable is alyaws same not mattter it stores address of int char or double or any type of variable
    cout <<sizeof(p2)<<endl;
    cout <<sizeof(p3)<<endl;
    
    return 0;
}