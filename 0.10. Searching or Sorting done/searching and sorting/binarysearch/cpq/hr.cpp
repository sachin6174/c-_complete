#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    string a;
    cin>>a;
    // cout<<a.length()<<endl;
    vector <int> p;
    for(int i=0;i<a.length();i++){
    if(a.at(i)==',') 
    {   
        //  for (int j=0;j<i ; j++) {
        //  p.push_back(p[j]);
        //  }
        
        // i++;
        p.push_back(i);

        // cout<<i<<endl;
   
    }
    }
//   
 int t=0;
 int l=0;
    for (int j = 0; j < p.size()-1; )
    {
   cout<<a.substr(l,p[t])<<endl;
  
   l=p[t-1]+1;
    t++;

        /* code */
    }  
    
    
        
    return 0;
}
