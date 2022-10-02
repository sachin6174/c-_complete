#include<bits/stdc++.h>
using namespace std;


int main(){
    map<int,string>mp;
    pair<int,string>p1(23,"sachin");
    pair<int,string>p2(2,"bunty");
    pair<int,string>p3(3,"ram5");
    pair<int,string>p4(3,"ram1");// it will not be inserted as key is already present
    pair<int,string>p5(3,"ram0");// it will not be inserted as key is already present 
    //updating like this will not work


    mp[3]="ram0";// we can update it like this or by removing previous
    mp.insert(p1);
    mp.insert(p2);
    mp.insert(p3);
    mp.insert(p4);
    mp.insert(p5);

    /*
        it is ordered map not sort in queue form but in increasing odder of key

    */


    for(auto item:mp){
        // we can also access like this using for each loop where we get items (not iterators)
        cout<<item.first<< " "<<item.second<<endl;
    }
  return 0;
}
