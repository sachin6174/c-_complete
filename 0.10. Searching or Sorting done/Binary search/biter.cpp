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
int bs(int *a,int s,int e,int k){
    // cout<<5;
    
    while(s<=e){
        int mid=s+(e-s)/2;
        if(a[mid]==k){
            return mid;
        }
        else if(a[mid]<k){
            s=mid+1;
        }else{ 
            e=mid-1;
        }
    }
    return -1;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a[]={1,2,3,4,5,6,17,8,9};
    cout<<bs(a,0,7,17);
    return 0;
}