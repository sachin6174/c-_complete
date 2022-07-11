#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;


        int i=0;
            int p= (2*i+1);
    for (int j  = 1; j < n+1; j++)
    {
for (i=0; i < n-1; i++)
   {
       
       cout<<" ";
       
   }


   for (i=0; i < j; i++)
   {
       cout<<p<<" ";
       p++;
   }
  cout<< endl;

    }

  
    return 0;
}