#include <iostream>
#include <climits>
#include <vector>
#include <utility> //contains the pair stl
#define endl '\n'// this is opposite of typedef
using namespace std;
typedef long long ll;// are used for data types
typedef vector<int> vi;
typedef pair<int,int> pi;
#include <stdint.h>
// macros
#define F first
#define S second
#define PB push_back
#define MP make_pair
ll a[1000000];// all will be initilized with by its own
int fib(int n)
{

    if (n == 1)
    {
        a[1]=1;
        return 1;
    }
    
    if (n == 2)
    {
        a[2]=1;
        return 1;
    }

    if(a[n]!=0){
        return a[n];
    }

    a[n]=(fib(n - 1) + fib(n - 2))%1000000007;
    
    return (fib(n - 1) + fib(n - 2))%1000000007;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        cout << fib(i) << ' ';
    }

    return 0;
}