int k = row;
for (int i = 0; i < row; i++)
{
    for (int l = k - 1; l >= 0; l--)
    {
        for (int j = 0; j < col; j++)
        {
            cout << input[i][j] << " ";
        }
        cout << "\n";
    }
    k--;
}