#include <iostream>
#include <cstring>
using namespace std;
#include <bits/stdc++.h>

int maxii(int *a)
{
    int maxi = INT_MIN;
    int i = 0;
    while (i < 257)
    {
        maxi=max(maxi, a[i]);
        i++;
    }
    return maxi;
}

char highestOccurringChar(char input[]) {
    // Write your code here
    int size = strlen(input);
    int arr[257] = {0};
    int i = 0;
    while (i < size)
    {
        arr[input[i]]++;
        i++;
    }
    i=0;
    // while(i<257){
    //     cout<<arr[i]<<' ';
    //     i++;
    // }
    int maxi = maxii(arr);
    // cout<<endl<<maxi<<endl;
    i = 0;
    while (i < size)
    {
        if (arr[input[i]] == maxi)
        {
            return input[i];
           
        }
        i++;
    }
    return input[0];
}


int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << highestOccurringChar(str);
}