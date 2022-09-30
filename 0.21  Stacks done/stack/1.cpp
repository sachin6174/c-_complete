#include <iostream>
#include <climits>
#include <vector>
#include <stack>
#include <algorithm>
#include <utility> //contains the pair stl
#define endl '\n'  // this is opposite of typedef
using namespace std;
typedef long long ll; // are used for data types
typedef vector<int> vi;
typedef pair<int, int> pi;
#include <stdint.h>
// macros
#define F first
#define S second
#define PB push_back
#define MP make_pair

// true == open
// false ==closed
int typeOf(char c){
    if(c=='{'||c=='}'){
        return 1;
    }
    if(c=='['||c==']'){
        return 2;
    }
    return 3;
}

bool validOrNot(string const & k){
    stack<char> S;
    for(int i=0;i<k.size();i++){
        if (k[i] == '[' || k[i] == '{' || k[i] == '('){
            S.push(k[i]);
        }
        else if(!S.empty()&& typeOf(S.top())==typeOf(k[i])){
            S.pop();
        }
        else{
             return false;//}}
         }
    }
    return S.empty();
}

    int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    cout<<validOrNot(s);
    return 0;
}