#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    // lower bound for vector
    auto pointer1 = lower_bound(v.begin(), v.end(), 7);
    cout << (*pointer1) << endl;

    // lower bound for array;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    sort(array, array + n);
    // lowerbound
    int *pointer2 = lower_bound(array, array + n, 7);

    // if you want upper bound then just replace lower_bound with upper_bound
}