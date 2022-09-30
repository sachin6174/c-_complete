#include <iostream>
#include <climits>
#include <vector>
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

int fib(int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n == 2)
    {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
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