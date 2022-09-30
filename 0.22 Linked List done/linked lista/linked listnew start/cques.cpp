#include <iostream>
//2,147,483,647
using namespace std;
#include <vector>
#include<algorithm>

int weathsum(int a[][100], int m, int n, vector<int> v)
{
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum = sum + a[i][j];
            // cout << sum << endl;
        }
            v.push_back(sum);
            // cout<<sum<<endl;
            sum = 0;


    }
    return *max_element(v.begin(), v.end());
}

int main()
{
    vector<int> v;
    int m, n;
    int a[100][100];
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << a[i][j]<<" ";
    //     }
    // }
    // cout << endl;
    cout << weathsum(a, m, n, v);

    return 0;
}

/*
3 3
1 2 3 3 2 1 
*/