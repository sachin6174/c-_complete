#include <iostream>
using namespace std;
#include "functionclass.cpp"
// fraction sum(int n,int d)
// {
// return ;
// }
int main()
{
    // int n;int d;
    // cin>>n;
    // cin>>d;
    fraction f1(5,2);
    f1.display();
    cout<<endl;
    // fraction f2(n,d);
    fraction f2(2,8);
    f2.display();
    cout<<endl;

    f1.add(f2);//f1=f1+f2//here the value get updated 
    cout<<endl;
    f1.multiply(f2);
    // f1.display();
    cout<<endl;
   
    return 0;
}