#include <iostream>
using namespace std;

void rowprinter(int **input, int row, int col)
{
    int i = 0;
    while (i < col)
    {
        cout << input[row][i] << ' ';
        i++;
    }
}

void print2DArray(int **input, int row, int col)
{
    // Write your code here

    if (row == 0 || col == 0)
    {
        return;
    }

    int m = row;
    int n = col;
    int i = 0;
    while (i < m)
    {
        int j = i;
        while (j < n)
        {
            rowprinter(input, i, col);
            cout << char(10);
            j++;
        }
        i++;
    }
}
