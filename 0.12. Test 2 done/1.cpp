#include <iostream>
#include <climits>
using namespace std;
void Leaders(int *arr, int len)
{
    int i = 0;
    bool print = true;
    while (i < len)
    {
        int j = i+1;
        while (j < len)
        {
            if (arr[i]<arr[j])
            {
                print = false;
                break;
            }
            j++;
        }

        if (print)
        {
            cout << arr[i] << ' ';
        }
        print=true;

        i++;
    }
}

int main()
{
    int len;
    cin >> len;
    int *arr = new int[len + 1];

    for (int i = 0; i < len; i++)
    {
        cin >> arr[i];
    }
    Leaders(arr, len);
}
