#include <iostream>
using namespace std;
//unions are like structures but provide better memory management

union money     
{
    int rice;//4
    char car;//1
    float pound;//4
    //will use just 1 entity at a time.
    // max memory use will be 4

};


int main()

{
    union money m1;
    m1.rice=24;
    m1.car='c';
    cout<<endl<<m1.rice<<endl;   // will print garbadge value as it will print for car now as car is the latest decleration
    // as the memory is shared
    cout<<m1.car<<endl;// tis will be printed right
    return 0;
}
