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

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a[6][3];
    int nRows=6;
    int nCols=3;

    for (int i = 0; i < 6; i++){
        for (int j = 0; j < 3; j++){
            a[i][j]=rand()%10;
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;

int is=1;
// int p=min(nCols,nRows);
int r=0,  c=0;
while(is<=(3+1)/2)
{   int s=1;
    int e=nCols-2*(is-1);

    int i=r; //// 
    int j=c;  /////

    while(s<=e){

        cout<<a[i][j]<<' ';
        j++;

        s++;
    }


    s=1; 
    e=nRows-1-2*(is-1);  

    i=r+1;  ///
    j=nCols-1; 

    while(s<=e){

        cout<<a[i][j]<<' ';
        i++;

        s++;
    }


    s=1;   
    e=nCols-1-2*(is-1);  

    i=nRows-1;
    j=nCols-2;

    while(s<=e){

        cout<<a[i][j]<<' ';
        j--;

        s++;
    }

    s=1;
    e=nRows-2-2*(is-1);

    i=nRows-2;  ////
    j=c;  ////////

    while(s<=e){

        cout<<a[i][j]<<' ';
        i--;

        s++;
    }

    nRows-=1;
    nCols-=1;
    is++;
    r++;
    c++;
 }   
    return 0;
}