#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Edge{
  public:
    int v1;
  int v2;
  int weight;
    Edge(){}
    Edge(int s,int d,int w){
        v1 = s;
        v2 = d; 
        weight = w;  
        }
    
};
bool compare(Edge v1, Edge v2){
    return (v1.weight < v2.weight);
}

int findParent(int* parent , int v){
    //BASE CASE: if(parent[v] == v) the topmost parent we wanted so return v 
    if(parent[v] == v){
        return v;
    }
    int nextParent = parent[v]; //go to the index placed in parent[v] and check top most parent of that 
    int parentFound = findParent(parent,nextParent);
    return parentFound;
}

void KruskalMST(int V,int E,Edge* graph){
    //SORT IN ASCENDING ORDER ACCORDING TO WEIGHT
    sort(graph,graph+E,compare);
    int * parent = new int[V];
    for(int i=0;i<V;i++){
        parent[i] = i;
    }
    Edge* MST = new Edge[V-1];
    int i=0;
    int edgecount = 0;
    while(edgecount != V-1){
        Edge currentEdge = graph[i];
        int parentV1 = findParent(parent,currentEdge.v1);
        int parentV2 = findParent(parent,currentEdge.v2);
        if(parentV1 != parentV2){
          // output[edgecount] = Edge(currentEdge.v1,currentEdge.v2,currentEdge.weight);
            MST[edgecount] = currentEdge;
            i++;
            edgecount++;
            parent[parentV1] = parentV2;
            
        }
        else{
              i++;
        }
      
    }
    //print MST
    for(int i=0;i<edgecount;i++){
        Edge currentEdge = MST[i];
        if(currentEdge.v1 < currentEdge.v2){
            cout<<currentEdge.v1<<" "<<currentEdge.v2<<" "<<currentEdge.weight<<endl;
        }else{
            cout<<currentEdge.v2<<" "<<currentEdge.v1<<" "<<currentEdge.weight<<endl;
        }
    }
    delete[] MST;
    delete[] parent;
    
}
int main(){
    int V;
    int E;
    cin>>V>>E;
    Edge *graph = new Edge[E];
    for(int i=0;i<E;i++){
        int v1;
        int v2;
        int w;
        cin>>v1>>v2>>w;
        graph[i] = Edge(v1,v2,w);
    }
    KruskalMST(V,E,graph);
    delete[] graph;
    return 0;
    
}