#include <iostream>
#include <climits>
#include <vector>
// #include <utility> //contains the pair stl
// #define endl '\n'// this is opposite of typedef
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
    int i=0;
    while(i<nCols){
        
        
        int l;
        if(i%2==0){
            l=0;
            int j =0;
            while(j<nRows){
                cout<<a[l][i]<<" ";
                l++;
                j++;
            }
        }else{
            l=nRows-1;
            int j =0;
            while(j<nRows){
                cout<<a[l][i]<<" ";
                l--;
                j++;
            }
        }
        i++;
       
    }
    cout<<endl;


    
    
    return 0;
}