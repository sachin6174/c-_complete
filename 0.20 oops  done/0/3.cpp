#include <iostream>
#include<algorithm>
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
    vector<int> v;
    int k=10;
    int i=0;
    while(k--){
        int p=rand()%100;
        v.push_back(p);
        cout<<v.at(i++)<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end());
    cout<<"v.begin() "<<*(v.begin())<<"     v.end() "<<*(v.end()-1)<<endl;
    k=v.size();
    i=0;
    while(k--){
        cout<<v.at(i++)<<" ";
    }

    return 0;
}