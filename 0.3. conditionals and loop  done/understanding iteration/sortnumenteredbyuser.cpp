#include <iostream>
using namespace std;
// code not working i dont know why?
int main()
{
    int t;
    cin >> t;
    int array[t];
    int i;
    for (i = 0; i < t; i++)
    {
        cin >> array[i];
    }
    for (i = 0; i < t; i++)
    {
        if ((array[i]) < (array[i + 1]))
        {
            return 0;
        }
        else
        {
            int temp = (array[i]);
            (array[i]) = (array[i + 1]);
            (array[i + 1]) = temp;
        }
        

    }

    for ( i = 0; i < t; i++)
    {
        cout<< array[i] << " ";
    }

    return 0;
}