//enum2
#include <iostream>
using namespace std;

int main()
{
    enum meal{ breakfast,lunch,dinner};// it allocate values such as 0 to breakfast 1 to lunch and 2 to dinner
    meal m1=breakfast;
    meal m2=lunch;
    meal m3=dinner;
    cout<<m1<<endl;
    cout<<m2<<endl;
    cout<<m3<<endl;
    return 0;
}