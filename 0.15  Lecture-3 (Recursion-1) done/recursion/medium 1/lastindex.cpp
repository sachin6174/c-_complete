#include <iostream>
//2,147,483,647
using namespace std;

int last_index(int *a, int n, int x)
{
    if (n == 0)
    {
        return -1;
    } // recursion will work on the n==1 element so we should not take it as base case
    int temp = a[0];
    int small = last_index(a + 1, n - 1, x);
    if (small == -1)
    {
        if (x == temp)
        {
            return 0;
        }
        else
        {
            return -1;
        }
    }

    return small + 1;
}

int main()
{

    int a[] = {1, 1, 2, 3, 2, 1, 1};
    int n = 7;
    cout << last_index(a, n, 1);
    return 0;
}