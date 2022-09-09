#include <iostream>
#include<bits/stdc++.h>
#include <climits>
#include <vector>
#include <utility> //contains the pair stl
#define endl '\n'// this is opposite of typedef
#define v vector<int> // this is opposite of typedef
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
int gcd(int a,int b){
    if(a==0){
        return b;
    }
    return gcd(b%a,a);
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<gcd(6,12)<<endl;
    cout<<__gcd(6,12);
    
    v k;
    k.push_back(10); // error method not found

    vi l;
    l.push_back(0);
    return 0;
}