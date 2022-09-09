#include <iostream>
using namespace std;
#include"complexclass.cpp"

int main()
{
    // int a,b,c;
    // cin>>a>>b>>c;
    complex n1(1,1);
    n1.display();
    complex n2(1,1);
    n2.display();
    // n1.sum(n2);
    // n1.display();
    n1.multiply(n2);//giving wrong answer tell me why? 
    n1.display();

}