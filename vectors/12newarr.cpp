#include <iostream>
//2,147,483,647
using namespace std;
#include<vector>

// it not make new array it just updates the size
int main()
{
    vector <int > a;
    cout<<&a<<endl;
    a.push_back(5);
    
    cout<<&a<<endl;
    
    a.push_back(5);
    cout<<&a<<endl;
    a.push_back(5);
    cout<<&a<<endl;
    a.push_back(5);
    cout<<&a<<endl;
    a.push_back(5);
    cout<<&a<<endl;
    return 0;
}