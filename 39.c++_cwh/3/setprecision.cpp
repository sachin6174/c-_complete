#include<iomanip>
#include <iostream>
using namespace std;

int main()
{
   float num = 45.5;
  cout << "it is: " << fixed << setprecision(3) << num << " the end"<< endl;
  
  return 0;
}