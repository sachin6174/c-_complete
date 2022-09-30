#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n == 0)
    {
        cout << "1" << endl;
        return 0;
    }
    int ans = 0;

    for (int i = 0; n != 0; i++)
    {
        n = n / 10;
        ans++;
    }
    cout << ans << endl;

    return 0;
}