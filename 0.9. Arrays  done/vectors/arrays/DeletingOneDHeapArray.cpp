#include <iostream>
//2,147,483,647
using namespace std;

int main()
{
   int *p= new int [5];
   p[0]=3;
   p[1]=5;
   p[2]=3;
   delete []p; // we deallocated or deleted the array;
   cout<<p[1];//this wil give garbadge now;
    return 0;
}