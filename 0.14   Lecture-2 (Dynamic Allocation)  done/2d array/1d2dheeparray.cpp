#include <iostream>
using namespace std;
// 1d heap array
int main()
{
    int *p=new int[10];// it is compulsory to give size of a empty array
    for ( int i = 0; i < 10; i++)
    {
        cout<<"element of index "<<i<<" is ";
        cin>>p[i];// cin>>*(p+i); is also same thing
    }
    cout<<endl;
    for (int i = 0; i < 10; i++)
    {
           cout<<"element of index "<<i<<" is "<<p[i]<<endl;

    }
    //  deleting the heap memory
    delete [] p;//this the the way to delete heap array
    // yreha par nahi bhi delete karoge to chal jaiega but agar loops hai to program ke ram usage ko control karne ke lie we will use delete array.

    return 0;
}