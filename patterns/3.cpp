#include<iostream>
using namespace std;


int main(){

	int n,rows=1;
    cin>>n;
    while(rows<=n){
        int columns=1;
            while(columns++<=rows){
                cout<<'*';
            }
        cout<<"\n";
        rows++;
    }
  
}


