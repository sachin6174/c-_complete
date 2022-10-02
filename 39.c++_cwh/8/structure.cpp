#include <iostream>
using namespace std;
//structure used to store data  of different data types //user defined data types
struct employee
{
    int id;
    char favchar;
    float salary;
};

int main()
{
    struct employee sachin;
    sachin.id=1;
    sachin.favchar='s';
    sachin.salary=1200000;
    cout<<sachin.id<<endl;
    cout<<sachin.favchar<<endl;
    cout<<sachin.salary<<endl;
    return 0;
}
