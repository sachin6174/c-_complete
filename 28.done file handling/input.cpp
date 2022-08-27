#include<bits/stdc++.h>
using namespace std;
int main(){
   ifstream in;
   string s;
   in.open("input.txt");
   while(in.eof()!=true){
        getline(in,s);
        cout<<s<<endl;
   }
   in.close();
  return 0;
}
