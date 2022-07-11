#include<bits/stdc++.h>
#include <iostream>
using namespace std;

void spiralPrint(int **input, int nRows, int nCols)
{	
    int m=nRows,n=nCols,**a=input;
    int counter =0;
    int cs=0,ce=n-1,rs=0,re=m-1;
    int i;
    while(counter<nRows*nCols){
        
        i=cs;
        while(i<=ce){
            cout<<a[rs][i]<<" ";
            i++;
        }
        rs++;
        
        i=rs;
        while(i<=re){ 
            cout<<a[i][ce]<<" ";
            i++;
        }
        ce--;
        
        i=ce;
        while(cs<=i){  
            cout<<a[re][i]<<" ";
            i--;
        }
        re--;
        
        i=re;
        while(i>=rs){
            cout<<a[i][cs]<<" ";
            i--;
        }
        cs++;
        
        counter ++;
    }
    
}


int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int row, col;
        cin >> row >> col;
        int **matrix = new int *[row];

        for (int i = 0; i < row; i++)
        {
            matrix[i] = new int[col];
            for (int j = 0; j < col; j++)
            {
                cin >> matrix[i][j];
            }
        }
        spiralPrint(matrix, row, col);

        for (int i = 0; i < row; ++i)
        {
            delete[] matrix[i];
        }
        delete[] matrix;

        cout << endl;
    }
}