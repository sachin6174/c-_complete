#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
#include <utility> //contains the pair stl
#define endl '\n'  // this is opposite of typedef
using namespace std;
typedef long long ll; // are used for data types
typedef vector<int> vi;
typedef pair<int, int> pi;
#include <stdint.h>
// macros
#define F first
#define S second
#define PB push_back
#define MP make_pair





int a[1000000];
int fib(int n){
    if(n==0){
        a[0]=0;
        return 0;
    }
    if(n==1){
        a[1]=1;
        return 1;
    }
    if(a[n]!=0){
        return a[n];
    }
    a[n]=fib(n-1)+fib(n-2);
    return fib(n-1)+fib(n-2);
}



int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=25;
    int i=0;
    while (t--)
    {
    cout<<fib(i++)<<" ";
        
    }
    
    return 0;
}