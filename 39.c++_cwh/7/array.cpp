//collection of items of similar type stored in contiguous memory locations.
#include <iostream>
using namespace std;

int main()
{
    int marks[5]={11,22,33,44,55};// decleration of array
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;
    cout<<marks[5]<<endl;// will print garbadge value
    cout<<marks<<endl<<endl;

// another way to fill values in array
    int csmarks[4];
    csmarks[0]=9;
    csmarks[1]=7;
    csmarks[2]=8;
    csmarks[3]=5;
    csmarks[0]=10;// we can also change values of array
    cout<<csmarks<<endl;

    
    return 0;
}