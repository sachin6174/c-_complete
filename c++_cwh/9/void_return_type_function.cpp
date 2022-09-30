//it is not necessary to return value to the function we can make void functions
#include <iostream>
using namespace std;

void funct();//prototype of function
//void funct(void);//also acceptable this prototype is also valid
int main()
{
    
    funct();
    return 0;
}
void funct()
{
  cout<<"hello,everybody are you fine.";
}