#include <iostream>
using namespace std;

// wrong code showing 1 test code not passed on the console

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
{ // Write your code here
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

int main()
{
    int row, col;
    cin >> row >> col;

    int **input = new int *[row];
    for (int i = 0; i < row; i++)
    {
        input[i] = new int[col];
        for (int j = 0; j < col; j++)
        {
            cin >> input[i][j];
        }
    }
    print2DArray(input, row, col);
}
