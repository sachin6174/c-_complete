#include <iostream>
//2,147,483,647
using namespace std;
#include <cstring> // memset function initilize array with the requred value

long long int fibo(int n, long long int *arr)
{

    if (n == 0 || n == 1)
    {
        arr[n] = n;
        return n;
    }

    if (arr[n - 1] == -1)
    {
        arr[n - 1] = fibo(n - 1, arr);
    }

    if (arr[n - 2] == -1)
    {
        arr[n - 2] = fibo(n - 2, arr);
    }

    arr[n] = arr[n - 1] + arr[n - 2];
    return arr[n];
}

long long int fibo(int n)
{
    long long int *arr = new long long int[n + 1];
    // memset(arr, -1, n + 1);
    for (int i = 0; i < n+1; i++)
    {
       arr[i]=-1;
    }
    
    return fibo(n, arr);
}
int main()
{
    long long int a= fibo(100);
    cout << a;

    return 0;
}