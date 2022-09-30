#include <iostream>
using namespace std;
int main()
{
float x=12;
float &y=x;// storing value of x in y interested in their memory locations....
cout<<"value of x "<<x<<endl;
cout<<"value of y "<<y<<endl;

return 0;
}