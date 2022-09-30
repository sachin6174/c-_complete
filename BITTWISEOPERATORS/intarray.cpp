#include <iostream>
//2,147,483,647
using namespace std;

int main()
{
  int a[]={1,1,2,2,3,3,6,4,5,5,6};
  int p=a[0];
    for (int i = 0; i < 10; i++)
    {
        
       p=(p^a[i+1]);
    }
    cout<<p;
  
  
    return 0;
}