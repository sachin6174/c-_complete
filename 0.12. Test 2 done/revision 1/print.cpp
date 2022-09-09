#include <iostream>
#include <climits>
#include <vector>
#include<algorithm>
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

void print2DArray(int **input, int row, int col){

    int i=1;
    while(i<=row){
        
    }

}


int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int row,col;
    cin>>row>>col;
    int* *p=new int*[row];
    for(int i=0;i<row;i++){
        p[i]=new int [col];
        for (int j = 0; j < col; j++)
        {
            cin>>p[i][j];
        }
    }
    print2DArray(p, row, col);

    return 0;
}