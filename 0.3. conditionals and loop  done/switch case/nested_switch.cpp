#include <bits/stdc++.h>
using namespace std;

int main() {
  int day = 6;
  switch (day) {
    case 6:
      cout << "Today is Saturday";
      int k=5;
      switch(k){
        case 5:
            cout<<" s";
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