#include<iostream>
using namespace std;

int main() {
    char c;
    cin>>c;
    cout<<int (c)<<endl;
    if(64<c &&c<91){
        cout<<"1";
    }else if(96<c&&c<123)
    {
        cout<<"0";
    }
    else{
        cout<<"-1";
    }
	// Write your code here
	
}
