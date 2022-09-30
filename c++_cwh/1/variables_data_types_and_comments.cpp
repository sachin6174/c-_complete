#include <iostream> // never make file name with wite spaces
using namespace std;
int main()
{
    // ctrl+/ is  used to comment lines.
    //this is a single line comment
    /*
    this 
    is  a 
    multi 
    line 
    comment.
    */
    int a = 5;
    float b = 2.7;
    double c= (int)1.78287828;// this is type casting

    // type casting 2
    /*
    double c= 1.78287828;
    c=(int)1.78287828
    */

    char d='d';// can store only one word
    bool e=true;// true means 1
    bool f=false;// false means 0

    cout<<"char d is "<<d;
    cout<< "\nthe value of a is " << a << " and valure of b is " << b << ".";
    cout<< "\nhello everybody.";            /*'\n' is used to print things in new line return 0;*/
    cout<<"\nvalue of c is "<<c;
    cout<<"\nvalue of e is "<<e;
    cout<<"\nvalue of f is "<<f;
} 