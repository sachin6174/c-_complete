#include<bits/stdc++.h>
using namespace std;
int main(){
   ifstream in; // clild class of iostream
   string s;
   in.open("input.txt");
   // file must be present to read
   while(in.eof()!=true){
        getline(in,s);
        cout<<s<<endl;
   }
   in.close();
  return 0;
}
