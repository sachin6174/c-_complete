#include <iostream>
//2,147,483,647
using namespace std;

class sac{
    public:
        int data=7;
        char* sa;
    };
int main()
{
    
    auto a=5;
    auto c=10.3;
    cout<<(c)<<endl;
    cout<<a+c<<endl;
    auto s="sachin";
    auto s1='s';
    auto p=&a;

    cout<<s<<endl;

    cout<<typeid(s).name()<<endl; // it should give string // but the function is not defined for classes
    cout<<typeid(a).name()<<endl;//int    i
    cout<<typeid(c).name()<<endl;// double  d
    cout<<typeid(s1).name()<<endl;// char  c
    cout<<typeid(p).name()<<endl;// pointer  pi

    char sachin[]={'a','b','c','d'};


    sac p;
    //  cout<< p.data;
    
    return 0;
}