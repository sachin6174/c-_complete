#include <iostream>
using namespace std;

int main()
{
    //so give address to the pointr variable at the time of decleration or just make it null pointer by giving value 0

    int*l=0;// no momory is pointing
    cout<<&l<<endl;// 
    cout<<l<<endl;// 
    cout<<*l<<endl;// noting will happen as l was not storing address of any other variable


    return 0;
}