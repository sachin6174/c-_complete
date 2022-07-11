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

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a[100000];
    int t=10;
    int i=0;
    while(t--){
        a[i]=rand()%10;
        cout<<a[i]<<" ";
        i=i+1;
    }
    cout<<endl;
    sort(a,a+10);
    t=10;
    i=0;
    while(t--){
        cout<<a[i++]<<" ";
    }
    return 0;
}