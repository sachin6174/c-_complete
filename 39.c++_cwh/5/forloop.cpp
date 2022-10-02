//use tab to move to next part of snippit.
#include <iostream>
using namespace std;
int main()
{
    //initilization siraf ek bar hota hai
    //condition check har bar hota hai
    //updation bhi har bar hota hai
/*
can also be written as 
for (int i = 1/*initilization; i < 101//condition//; i++/*updation condition )
{
    cout<<i<<endl;
   
}
*/
for (int i = 1; i < 101; )
{
    cout<<i<<endl;
    i++;
}

return 0;
}