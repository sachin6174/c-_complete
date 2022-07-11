#include <bits/stdc++.h>

using namespace std;



void solve(int *a,int n) {
    int s=0,e=n-1;
    while(s<e){
      swap(a[s++],a[e--]);  
    }
    
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        int n;
        int *a=new int [n];
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        solve(a,n);
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
    }
}