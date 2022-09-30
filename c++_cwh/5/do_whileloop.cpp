#include <iostream>
using namespace std;
#include<iomanip>//this is a header file containing setw manipulator
int main()
{
    //loop always run one time although the condition is wrong >> in do while loop

    // in while loop it terminates if the condition is wrong
    int i=-12;
do{
    cout<<i<<setw(3)<<endl;//setw(4) will provide 3 digit space to every intezer   
    i++;
}
while(i<13);

return 0;

}