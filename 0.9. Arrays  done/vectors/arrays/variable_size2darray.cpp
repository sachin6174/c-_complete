#include <iostream>
using namespace std;

int main()
{
    
    // int a [][5]={{1,5,4},{1,2,8,9,3}};
    // cout<<a[0][1]<<endl;
    // cout<<a[1][3]<<endl;

    int m,n,r;
    cin>>m>>n;
    int a[m][n];

for (int  i = 0; i < m; i++)
    {
        for (int j=0;j<n;j++)
        { a[i][j]=0; }
                        
    }

    for (int  i = 0; i < m; i++)
    {
        cin>>r;
        for (int j=0;j<r;j++)
        { cin>>a[i][j]; 

                        }
    }

for (int  i = 0; i < m; i++)
    {
        cout<<"{";                        
        for (int j=0;j<n;j++)
        { 
     cout<<a[i][j]<<" ";

                        }
        cout<<"}";                        
    }

/*
input

2 4 
2 1 2 
3 3 4 5 
*/


/*
2 2
3 1 5 4
5 1 2 8 9 3
*/




    
    
    
    
    
    return 0;
}

