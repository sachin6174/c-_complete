#include <iostream>
#define endl '\n'
using namespace std;


// int f(int n){
//     return 1;
// }
int f(int n){
    if(n==1){
        return 1;
    }
    return n*f(n-1)%1000000007 ;
}
int32_t main()
{   
    int n=12;
    cout<<f(n);
    return 0;
}