#include<bits/stdc++.h>
using namespace std;


int main(){
    ifstream in;
    
   try{
        in.open("sachin.txt");
        throw "file not exist";  
   }
   catch(const char* a){
      cout<<a;
   }
  return 0;
}
