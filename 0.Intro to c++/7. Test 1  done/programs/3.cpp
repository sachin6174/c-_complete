#include<iostream>
using namespace std;


int main(){

  // Write your code here
int n,i=1;
    cin>>n;
    // n=5;
    
    while(i<=n){
        
        int p=1;
        int j=1;
        while(j<=n-(i-1)){
        	cout<<p;
            j++;
            p++;
            
        }

        int k=1;
        while(k<=2*(i-1)){
            cout<<'*';
            k++;
        }
        int pr=n-(i-1);
        int l=1;
        while(l<=n-(i-1)){
            cout<<pr;
            pr--;
            l++;
        }
            
            
        
        cout<<char(10);
        i++;
    }
}


