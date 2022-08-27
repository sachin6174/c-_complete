#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ofstream MyFile("filename.txt");
    string s;
    getline(cin,s,'$');
    bool freq[256]={0};

   for(int i=0;i<s.size();i++){
        freq[s[i]]=1;
   }

    for(int i=0;i<256;i++){
        if(freq[i]==1){
          if(char(i)=='\n'){
            continue;
          }
            string c;
            c.push_back(char(i));
            c.push_back('\n');
            MyFile<<c;
        }
    }
  MyFile.close();
}