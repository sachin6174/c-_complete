#include<bits/stdc++.h>
using namespace std;
int main(){
   string s;
   getline(cin,s,'$');
   
   ofstream out;
   out.open("output1.txt");
   out<<s;
   out.close();
  return 0;
}
