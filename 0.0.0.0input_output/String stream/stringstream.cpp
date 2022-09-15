#include<bits/stdc++.h>
using namespace std;
int main(){

    // typecast of integer to string
  stringstream sso;
  int a;
  cin>>a;
  sso<<a;
    
    string str;
    // str<<sso;
    sso>>str;
    cout<<typeid(str).name()<<endl;
    cout<<typeid(a).name();


  return 0;
}
