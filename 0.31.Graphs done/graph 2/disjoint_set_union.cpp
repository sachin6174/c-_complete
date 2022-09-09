#include<bits/stdc++.h>
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

int main(){
    vector<edge> v;
    int V;
    int E;
    cin>>V>>E;
    for(int i=0;i<E;i++){
        int v1;
        int v2;
        int w;
        cin>>v1>>v2>>w;
        v.push_back( edge(v1,v2,w));
    }
    int *dsu = new int[V];
    for(int i=0;i<V;i++){
        dsu[i]=-1;
    }
    for(int i=0;i<E;i++){
        if(dsu[v[i].v1]==-1 && dsu[v[i].v2]==-1){
            dsu[v[i].v1]=v[i].v1;
            dsu[v[i].v2]=v[i].v1;
        }
        if(dsu[v[i].v1]!=-1 && dsu[v[i].v2]==-1){
            dsu[v[i].v2]=dsu[v[i].v1];
        }
        if(dsu[v[i].v1]==-1 && dsu[v[i].v2]!=-1){
            dsu[v[i].v1]=dsu[v[i].v2];
        }
        if(dsu[v[i].v1]==-1 && dsu[v[i].v2]==-1){
            if(dsu[v[i].v1]==dsu[v[i].v2]){
                cout<<"cycle"<<endl;
            }else{
                
            }
        }
    }
}