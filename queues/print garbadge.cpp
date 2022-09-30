#include <iostream>
//2,147,483,647
//non sorted
//a[]={2,6,1,6,8,3,6,2,6,0,4,-2}
//sorted 
//a[]={-5,-4,2,4,6,8,9,12,45,}
using namespace std;
#include<climits>

int main()
{
    short int a;
    short int * b=&a;
    short int i=SHRT_MIN;
    while (i<2){

        cout<<*b<<" ";
        b=b+1;
        i++;
    }
    return 0;
}