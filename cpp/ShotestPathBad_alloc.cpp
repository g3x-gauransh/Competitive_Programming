#include<bits/stdc++.h>
using namespace std;

// void shortestPath(vector<int> graph[],int n,int sr){
//     vector<int> dis(n+1,INT_MAX);
//     queue<int> q;
//     dis[sr]=0;
//     q.push(sr);
//     while(!q.empty()){
//         int node=q.front();
//         q.pop();
//         for(auto it: graph[node]){
//             dis[it]=min(dis[node]+1,dis[it]);
//             q.push(it);
//         }
//     }
//     for(int i=1;i<n;i++){
//         cout<<dis[i]<<" ";
//     }
//     return ;
// }
void BFS(vector<int> adj[], int N, int src) 
{ 
	int dist[N];
	for(int i = 0;i<N;i++) dist[i] = INT_MAX; 
	queue<int>  q;
	
	dist[src] = 0;
	q.push(src); 

	while(q.empty()==false) 
	{ 
		int node = q.front(); 
		q.pop();
		 
		for(auto it:adj[node]){
		    if(dist[node] + 1 < dist[it]){
		        dist[it]=dist[node]+1;
		        q.push(it);
		    }
		} 
	} 
	for(int i = 0;i<N;i++) cout << dist[i] << " "; 
	
} 

void adjList(vector<int> graph[],int u,int v){
    graph[u].push_back(v);
    graph[v].push_back(u);
}

int main(){

    int N=9;
    vector<int> graph[N];

    adjList(graph,0,1);
    adjList(graph,0,3);
    adjList(graph,1,2);
    adjList(graph,1,3);
    adjList(graph,2,6);
    adjList(graph,3,4);
    adjList(graph,4,5);
    adjList(graph,5,6);
    adjList(graph,6,7);
    adjList(graph,7,8);
    adjList(graph,6,8);

    BFS(graph,N,0);
    
    return 0;
}