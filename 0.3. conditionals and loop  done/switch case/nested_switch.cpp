#include <bits/stdc++.h>
using namespace std;

int main() {
  int day = 6;
  int k=5;
  switch (day) {
    case 6:
      cout << "Today is Saturday";
      
            switch(k){
              case 5:
                  cout<<" s";
                  break;
              default:
                  cout<<"x";    
            }
      break;
    case 7:
      cout << "Today is Sunday";
      break;
    default:
      cout << "Looking forward to the Weekend";
  }
  return 0;
}