#include<bits/stdc++.h>
using namespace std;




int main(){
   int m,n;
   cin>>m>>n;
   int ** arr=new int * [m];
   for(int i=0;i<m;i++){
       arr[i]=new int [n];
       for(int j=0;j<n;j++ ){
           cin>> arr[i][j];
        //    cout<<arr[i][j]<<" ";
       }
    //    cout<<endl;
   }


    int ** dp=new int * [m];
   for(int i=0;i<m;i++){
       dp[i]=new int [n];
       for(int j=0;j<n;j++ ){
           dp[i][j]=-1;
          if(arr[i][j]==0){
              dp[i][j]=0;
          }
          if(i==m-1 || j==n-1){
              dp[i][j]=arr[i][j];
          }
       }
   }
   for(int i=m-2;i>=0;i--){
       for(int j=n-2;j>=0;j-- ){
           if(dp[i][j]==-1)
              dp[i][j]=1+min(dp[i+1][j+1],min(dp[i+1][j],dp[i][j+1]));
          
       }
    
   }
    cout<<endl;
    int ans=0;
   for(int i=0;i<m;i++){
       for(int j=0;j<n;j++ ){
           cout<<dp[i][j]<<" ";
           ans=max(ans,dp[i][j]);
       }
       cout<<endl;
   }
   cout<<endl<<ans;
}

/*
5 6
0 1 0 1 0 1
1 0 1 0 1 0
0 1 1 1 1 0
0 0 1 1 1 0
1 1 1 1 1 1
*/
