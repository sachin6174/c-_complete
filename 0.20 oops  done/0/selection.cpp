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



void selection_sort(int *a,int n){
    for(int i=0;i<n-1;i++){
        int min_index=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min_index]){
                min_index=j;
            }
        }
                swap(a[i],a[min_index]); 
        
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a[1000];
    for(int i=0;i<100;i++){
        a[i]=rand()%100;
        cout<<a[i]<<" ";
    }
    // selection_sort(a,100);
    sort(a,a+100);
    cout<<endl;
    cout<<endl;
    for(int i=0;i<100;i++){
        cout<<a[i]<< " ";
    }
    return 0;
}