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
    vector<int> v;
    v.push_back(10);
    // cout<<v.at(0);
    cout<<&v;
    // v[0];
    vector <int> :: iterator k;
    
    return 0;
}