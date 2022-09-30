#include <iostream>
using namespace std;
// give me indexes of all the 3 present in array.
//give me just first index
//give me just last index
// give me all index
int main()
{
    int a[]={1,3,4,5,2,7,3,4,56,3};
    cout<<sizeof (a)<<endl;
    cout<<"elements of elements in random array "<<sizeof (a)/4<<endl;
    for (int i = 0; i < (sizeof(a)/4); i++)
    {
        if(a[i]==3){
          cout<<i<<endl;
        }
    }
    
    
    return 0;
}
