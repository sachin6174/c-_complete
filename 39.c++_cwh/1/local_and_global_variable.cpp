#include <iostream>
using namespace std;
int glo=5;//global decleration

// we can declare seme variable in global and local varible but the presidnce is for local  variable
void sum()
{
// glo not defined in this function so it will pick from global decleration.
    cout<<glo<<endl;
}


int main()//program starts with main () always no matter if any function is defined above the main function.

{
int glo=9;//declearing and giving value in the variable it is declkeared loacally
glo=50;// updating value of local variable
sum();
cout<<endl<<glo<<endl;
return 0;
}