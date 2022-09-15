#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;// size of array
   int a[10000];
   cin>>n;
   // array input
   for(int i=0;i<n;i++){
        cin>>a[i];
   }
    //bubble sort largest element at last

    
  for (int i = 0; i < n; i++) {
    // rounds++;
    int flag = false;
    for (int j = 0; j < (n - 1); j++) {
      if (a[j] > a[j + 1]) {
        flag = true;
        int temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
    }
    cout<<"iteratio"<<i<<endl;
    if (flag == false) {
      break;
    }
  }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    // 4 1 2 3 
  return 0;
}
