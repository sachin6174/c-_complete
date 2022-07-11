#include <bits/stdc++.h>
using namespace std;


void bfs(int ** edge,int n,bool *visited,int s){
    queue<int>q;

    q.push(s);
    visited[s]=1;
    while(!q.empty()){
        cout<<q.front()<<" ";
        for(int j=0;j<n;j++){
                if(edge[q.front()][j]==1&&!visited[j]){
                    q.push(j);
                    visited[j]=1;
                }
        }
        q.pop();
    }
}


void bfsall(int ** edge,int n){
    bool *visited=new bool[n];
    for(int i=0;i<n;i++){
        visited[i]=0;
    }
    for(int i=0;i<n;i++){
        if(visited[i]==0){
            bfs(edge,n,visited,i);
        }
    }
    // delete visited array
    delete[]visited;
}


void dfs(int ** edge,int n,bool *visited,int s){
    cout<<s<<" ";
    visited[s]=1;
    for(int j=0;j<n;j++){ 
        if(edge[s][j]==1&&!visited[j]){
            dfs(edge,n,visited,j);
        }
    }
}

void dfsall(int ** edge,int n){
    bool *visited=new bool[n];
    for(int i=0;i<n;i++){
        visited[i]=0;
    }
    for(int i=0;i<n;i++){
        if(visited[i]==0){
            dfs(edge,n,visited,i);
        }
    }
    // delete visited array
    delete[]visited;
}

int main() {
    int n;
    int e;
    cin>>n>>e;
    int* *edge=new int*[n];
    for(int i=0;i<n;i++){
        edge[i]=new int[n];
        for(int j=0;j<n;j++){
            edge[i][j]=0;
        } 
    }
    for(int i=0;i<e;i++){
        int a,b;
        cin>>a>>b;
        edge[a][b]=1;
        edge[b][a]=1;
    }
    //print the matrix
   /* for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<edge[i][j]<<" ";
        } 
        cout<<endl;
    }*/
    
    bfsall(edge,n);
    cout<<endl;
    dfsall(edge,n);

    // delete matrix and visited array
    for(int i=0;i<n;i++){
        delete [] edge[i];
    }
    delete[]edge;
}