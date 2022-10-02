#include <iostream>
#include<string>
using namespace std;

int main()
{
    char single='a';
    char multiple1[]="c++";
    // char multiple1[100]="c++";//wrong decleration
    char multiple2[]={'a','s','+','\0'};

    char multiple3[4]="c++";//always have a null character so it is 4 here
    cout<<single<<endl;
    cout<<multiple1<<endl;
    cout<<multiple2<<endl;
    cout<<multiple3<<endl;
    return 0;
}