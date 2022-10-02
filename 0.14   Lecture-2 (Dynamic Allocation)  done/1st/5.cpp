// recieving data by reference
#include <iostream>
using namespace std;

int & jodalawode(int n){
    n++;
    return n;
}

int main()
{
    int k=5;
    // cout<<int(&k)<<endl;
    int& j=jodalawode(k);
    cout<<k<<endl;
    return 0;
}