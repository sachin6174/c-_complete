//#include <iostream>
#include<stdio.h>
//compile://g++ test_code.cpp
//run://a.exe < input.txt > output.txt
#include<bits/stdc++.h>
#define ll  long long
#define vec vector  
#define ar array  
//just Throw hash map
//Pick the global decleration
//delete the dynamic allocation
//os_base::sync_with_stdio(0); 
//cin.tie(0);  
using namespace std;


void findLargest(int **input, int nRows, int mCols)
{   
    int m=nRows;
    int n=mCols;
    int arr[m+n];
    arr[0]=INT_MIN;


 
// row sums
   int i=0,sum=0,k=1;
    while(i<nRows){
        
        int j=0;
        while(j<mCols){
        	sum=sum+input[i][j];
            j++;
    	}
        
        
        arr[k]=sum;
        sum=0;
        k++;
        
        i++;
    }
    // i=0;
    // while(i<m+n){
    //     cout<<arr[i]<<' ';
    //     i++;
    // }

//column sums

    // int lastofcol = k;
    i=0;
    sum=0;
     while(i<nRows){
        
        int j=0;
        while(j<mCols){
        	sum=sum+input[j][i];
            cout<<endl;
            cout<<input[j][i]<<endl;
            j++;
    	}
        arr[k]=sum;
        sum=0;
        k++;
        
        i++;
    }
    i=0;
    while(i<m+n){
        cout<<arr[i]<<' ';
        i++;
    }

    i=0;
    int maxi=INT_MIN;
    while(i<m+n){
        maxi=max(maxi,arr[i]);
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

		int **input = new int *[row];
		for (int i = 0; i < row; i++)
		{
			input[i] = new int[col];
			for (int j = 0; j < col; j++)
			{
				cin >> input[i][j];
			}
		}

		findLargest(input, row, col);
		cout << endl;
	}
}