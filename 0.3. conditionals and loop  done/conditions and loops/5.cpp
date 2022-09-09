#include<iostream>
using namespace std;


int main(){
    
    int S,E,W;
    cin>>S>>E>>W;
    int temp =S;
    while (S<=temp && temp<=E)
    {
        cout<<temp<<" "<<(( temp-32)*5)/9<<endl;
        temp=temp+W;
    }
    return 0;
  
}
