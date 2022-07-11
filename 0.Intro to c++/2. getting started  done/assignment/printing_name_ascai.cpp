#include <iostream>
using namespace std;
int main()
{
   int a[]={83,97,99,104,105,110} ;
   for(int i=0;i<(sizeof(a)/sizeof(int));i++)
   {
   char p=a[i];
   cout<<p;
   }
//    cout<<char(107);

    return 0;
}

