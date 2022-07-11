#include <iostream>
#include <climits>
#include <vector>
#include <utility> //contains the pair stl
#define endl '\n'// this is opposite of typedef
using namespace std;
typedef long long ll;// are used for data types
typedef vector<int> vi;
typedef pair<int,int> pi;
#include <stdint.h>
// macros
#define F first
#define S second
#define PB push_back
#define MP make_pair


int maxi=INT_MIN;
int colorrowno=0;
string roworcol="row";

void spiralPrint(int **input, int nRows, int nCols)
{	
    int j=0;
    while (j<nCols)
    {   
        int i=0;
        while (i<nRows)
        {
            cout<<input[i][j]<<" ";
            i++;
        }
        cout<<endl;
        j++;
    }
    
}


void colsPrint(int **input, int nRows, int nCols)
{	
    int sum=0;
    int j=0;
    while (j<nCols)
    {   
        int i=0;
        while (i<nRows)
        {
           sum=sum+input[i][j];
            i++;
        }
        
        if(maxi<sum){
        maxi=sum;
        colorrowno=nCols;
        roworcol="column";
         }
        j++;
    }  
}


void rowsPrint(int **input, int nRows, int nCols)
{	
    int sum=0;
    int i=0;
    while (i<nCols)
    {   
        int j=0;
        while (j<nRows)
        {
           sum=sum+input[i][j];
            j++;
        }

        if(maxi<sum){
        maxi=sum;
        colorrowno=nRows;
        roworcol="row";
        }

        cout<<endl;
        i++;
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