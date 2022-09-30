	#include <bits/stdc++.h>
using namespace std;
 
 long nthFibonacci(int input1)
 {
    if (input1 == 1)
    {
        return 0;
    }
    if (input1 == 2)
    {
        return 1;
    }
    int output = nthFibonacci(input1 - 2) + nthFibonacci(input1 - 1);
    return output;

}
int main()
{
    int n;
    cin >> n;
    int p = nthFibonacci(n);
    cout << p << endl;
    return 0;
}