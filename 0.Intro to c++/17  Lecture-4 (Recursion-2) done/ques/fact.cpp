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

ll  fact(int n ){
    if(n<=0){
        return 1;
    }
    return  1LL*( n*fact(n-1)); // type casted the tep memory in ll 
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<< 1LL* fact(15)<<endl;
    return 0;
}