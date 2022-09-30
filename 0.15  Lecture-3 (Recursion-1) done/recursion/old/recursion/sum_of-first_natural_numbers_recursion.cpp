#include <iostream>
using namespace std;

int function (int n){

    if (n==0){ return 0;}
    if (n==1){ return 1;}
    return (n+function(n-1));

}

int main()
{
    int n;
    cin>>n;
    int k= function(n);
    cout<<k<<endl;
    return 0;
}