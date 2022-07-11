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
    int a[7][4];

    int i=0;
    while(i<7){
        int j=0;
        while (j<4)
        {
            a[i][j]=rand()%10;
            cout<<a[i][j]<<' ';
            j++;
        }
        cout<<endl;
        i++;
    }
    
    

    return 0;
}