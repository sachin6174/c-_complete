#include <iostream>
#include<math.h>
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
    string s;
    cin >>s;
    int a[10000];
    int i=s.size()-1;
    int ai=0;
    while(i>=0){
        a[ai++]=s[i--]-'0';
        
    }
    /*
     int len = s.size();
          for (int i = 0; i < len; i++)
          {
              a[i] = s[len - i - 1] - '0';
          }
    */
    cout<<endl;
    ai=0;
    int no=0;
    while(ai<s.size()){
        cout<<a[ai]<<" ";
        no+=a[ai]*pow(10,ai);
        ai++;
    }
    cout<<endl;
    cout<<no;
    
    return 0;
}