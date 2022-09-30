#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    int output = fibonacci(n - 2) + fibonacci(n - 1);
    return output;
}

int main()
{
    int k;
    cin >> k;
    for (int i = 0; i <= k; i++)
    {
        int p = fibonacci(i);
        cout << p << "    ";
    }

    // int p = fibonacci(k);
    // cout << p << endl;
    return 0;
}