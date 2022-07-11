#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long int n, s, p, q;
    cin >> n >> s >> p >> q;
    long long int a[n];
    long long int k = pow(2, 31);
    a[0] = s % k;
    long long int i = 1;
    set<long long int, greater<long long int>> s1;

    s1.insert(a[0]);
    while (i < n)
    {

        a[i] = ((a[i - 1] * p) + q) % k;
        s1.insert(a[i]);
        i++;
    }
    cout << s1.size();
    cout<<endl;
    // set<long long int, greater<long long int> >::iterator it;
    // for (it=s1.begin() ; it!=s1.end(); i++)
    // {
    //     cout<<*it<<' ';
    //     it++;
    // }
    
    return 0;
}
