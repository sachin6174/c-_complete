#include<bits/stdc++.h>
using namespace std;
struct compare{
    bool operator()(pair<int,int>p1,pair<int,int >p2){
        return p1.first>p2.first;// min priority queue
    }
};
int main() {

	// Write your code here
    int n;
    cin>>n;
    int s[10000];
    int e[10000];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
	for(int i=0;i<n;i++){
        cin>>e[i];
    }
    priority_queue<pair<int,int>,vector<pair<int,int>>,compare> pq;
    for(int i=0;i<n;i++){
        pair<int,int>p1={s[i],0};
        pair<int,int>p2={e[i],1};
        pq.push(p1);
        pq.push(p2);
    }
    //  priority_queue<pair<int,int>,vector<pair<int,int>>>::iterator=it;
    while(!pq.empty()){
        cout<<pq.top().first<<" "<<pq.top().second<<endl;
        pq.pop();
    }
    int current=0;
    int maxi=0;
    while(!pq.empty()){
         if(pq.top().second==0){
            current ++;
        }else{
            current--;
        }
        maxi=max(maxi,current);
        pq.pop();
    }
	cout<<maxi<<endl;
}