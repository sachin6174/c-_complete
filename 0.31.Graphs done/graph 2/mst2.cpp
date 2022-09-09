#include <bits/stdc++.h>
using namespace std;

class edge{
    public:
    int w;
    int v1;
    int v2;
     
    edge(int w,int v1,int v2){
        this->w=w;
        this->v1=v1;
        this->v2=v2;
    }
};

struct compare{
    bool operator()(edge e1,edge e2 ){
        return e1.w>=e2.w;
    }
};

int main() {
    // Write your code here
    vector<edge> ve;
    priority_queue<edge,vector<edge>,compare>pq;
    int v;
    int e;
    cin>>v>>e;
    for(int i=0;i<e;i++){
        int v1,v2,w;
        cin>>v1>>v2>>w;
        edge k(w,v1,v2);
        // edge k1(w,v2,v1);
        pq.push(k);
        // pq.push(k1);
    }
    int count=1;
    int component[v]={0};
    for(int i=0;i<v;i++){
        component[i]=i;
    }
    while(count<=v-1){
        edge c=pq.top();
        if(component[c.v1]!=component[c.v2]){
            ve.push_back(c);
        }
        component[c.v1]=component[c.v2];
        count++;
        pq.pop();
    }
    for(int i=0;i<ve.size();i++){
        cout<<ve[i].v1<<" "<<ve[i].v2<<" "<<ve[i].w<<endl;
    }
    
}