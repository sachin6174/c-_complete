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
bool prime(int n){
    if(n<2){
        return false;
    }
    int i=2;
    while(1LL*i*i<=(n)){
        if(n%i++==0){
            return false;
        }
    }
    return true;

}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<prime(2);
    return 0;
}