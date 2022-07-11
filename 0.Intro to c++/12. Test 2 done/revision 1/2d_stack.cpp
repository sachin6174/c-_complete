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

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a[4][3] = {{0}};
    cout << "["
         << " ";
    for (int i = 0; i < 4; i++)
    {
        cout << "["
             << " ";
        for (int j = 0; j < 3; j++)
        {
            cout << &(a[i][j]) << " ";
        }

        cout << "]"
             << " ";
    }
    cout << "]"
         << " ";

    cout << endl;
    cout << endl;

    int i = 0;
    while (i <4) {
        cout << (a + i) << " " << *(a + i) << " " << **(a + i) << endl;
        i++;
    }

    return 0;

}