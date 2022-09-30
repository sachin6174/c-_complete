#include<bits/stdc++.h>
using namespace std;

class comp{
    public:
      bool operator()(pair<int,string> p1,pair<int,string> p2){
        return p1.first>p2.first;
      }

};


int main(){
   priority_queue<pair<int,string>,vector<pair<int,string>>,comp>pq;
   pair<int,string>p1(1,"kk 1");
   pair<int,string>p2(1,"kk 2");
   pair<int,string>p3(2,"kk 1");
   pair<int,string>p4(2,"kk 2");
   pair<int,string>p5(3,"kk 1");
   pq.push(p1);
   pq.push(p2);
   pq.push(p3);
   pq.push(p4);
   pq.push(p5);

    while(pq.size()>0){
        cout<<pq.top().first<< " "<<pq.top().second<<endl;
        pq.pop();
    }
  return 0;
}
