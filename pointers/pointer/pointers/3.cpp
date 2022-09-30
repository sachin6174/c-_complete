#include <iostream>
using namespace std;

int main()
{
    int i;
    cout<<i<<endl;
    i++;
    cout<<i<<endl;

    int *k;
    cout<<k<<endl;//garbadge address 
    cout<<*k<<endl;
    (*k)++;// this is vary dangerous can cause problems to the system
    return 0;


    
}