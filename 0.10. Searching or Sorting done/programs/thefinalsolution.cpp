
#include <bits/stdc++.h>
int findSecondLargest(int *input, int n)
{
    int max = INT_MIN, secondMax = INT_MIN;
    // int num;
    int i = 0;
    while (i < n)
    {
        // cin >> num;
        if (input[i] > max)

        {
            secondMax = max;
            max = input[i];
        }
        else if (input[i] > secondMax && input[i] != max) // to handle the repition case
        {
            secondMax = input[i];
        }
        i++;
    }
    return secondMax;
}