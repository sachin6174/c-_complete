// #include<bits/stdc++.h>
// // claculat nCr and pCr
// using namespace std;
// int main(){
//    int n;
//    int r;
//    cin>>n>>r;
//    int fact_n=1;
//    for(int i=1;i<=n;i++){
//     fact_n*=i;
//    }
//    int fact_r=1;
//    for(int i=1;i<=r;i++){
//         fact_r*=i;
//     }

//     int fact_n_r=1;
//     for(int i=1;i<=n-r;i++){
//         fact_n_r*=i;
//     }
//     cout<<(fact_n)/(fact_r*fact_n_r)<<endl;
//   return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans*=i;
    }
    return ans;
}

int main(){
   int n,r;
   cin>>n>>r;
   cout<<fact(n)/(fact(r)*fact(n-r));

  return 0;
}
