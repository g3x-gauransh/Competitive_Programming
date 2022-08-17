#include<bits/stdc++.h>
using namespace std;

void topoSort(vector<pair<int,int>> graph[],int node,stack<int> &st,vector<int> vis){
    vis[node]=1;
    for(auto it: graph[node]){
        if(!vis[it.first]){
            topoSort(graph,it.first,st,vis);
        }
    }
    st.push(node);
}

void shortestPath(vector<pair<int,int>> graph[],int n,int src){
    vector<int> dist(n+1,INT_MAX);
    vector<int> vis(n+1,0);
    stack<int> st;
    for(int i=0;i<=n;i++){
        if(!vis[i]){
            topoSort(graph,i,st,vis);
        }
    }

    dist[src]=0;
    while(!st.empty()){
        int node = st.top();
        st.pop();

        if(dist[node]!=INT_MAX){
            for(auto it: graph[node]){
                if(dist[node]+it.second<dist[it.first]){
                    dist[it.first]= dist[node]+it.second;
                }
            }
        }
    }
    for(int i=0;i<=n;i++){
        if(dist[i]==INT_MAX){
            cout<<"INF ";
        }
        else{
            cout<<dist[i]<<" ";
        }
    }
}
//using basic bfs/dfs increases time complexity in case when we achieve a shorter path than a 
// already updated path hence topological sorting will help in completing it faster.

void bfs(vector<pair<int,int>> graph[],int n,int src){
    int dist[n+1];
    for(int i=0;i<=n;i++){
        dist[i]=INT_MAX;
    }
    dist[src]=0;
    queue<int> q;
    q.push(src);
    while(!q.empty()){
        int node=q.front();
        q.pop();

        for(auto it:graph[node]){
            if(dist[it.first]>dist[node]+it.second){
                dist[it.first]= dist[node]+it.second;
                q.push(it.first);
            }
        }
    }
    
    for(int i=0;i<=n;i++){
        cout<<dist[i]<<" ";
    }
}

void adjList(vector<pair<int,int> > graph[],int u,int v,int wt){
    graph[u].push_back(make_pair(v,wt));
}

int main(){
    int N=5;
    vector<pair<int,int> > graph[N+1];
    adjList(graph,0,1,2);
    adjList(graph,0,4,1);
    adjList(graph,1,2,3);
    adjList(graph,2,3,6);
    adjList(graph,4,2,2);
    adjList(graph,4,5,4);
    adjList(graph,5,3,1);

    //bfs(graph,N,0);
    shortestPath(graph,N,0);
}