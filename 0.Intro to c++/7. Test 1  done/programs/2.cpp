#include<iostream>
using namespace std;

int main(){

  // Write your code here  
int i=1,p=1,n;
    cin>>n;
    while(i<=n){
        
        int k=1;
        while(k<=n-i){
            cout<<' ';
            k++;
        }
        
        // p=i;
        int j=i;
        while(j>=1){
            cout<<j;
            j--;
        }
        int l=1;
        int prin=2;
        while(l<=i-1){
            cout<<prin;
            prin++;
            l++;
        }
        
        cout<<char(10);
        i++;
    }
  
}

