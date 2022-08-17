#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pi;


//again bad_alloc (frustated)

// void Dijkstra(vector<pair<int,int>> graph[],int n,int src){
//     vector<int> dist(n+1,INT_MAX);
//     priority_queue<pi,vector<pi>,greater<pi> > pq;           //(dis,node)

//     dist[src]=0;
//     pq.push(make_pair(0,src));

//     while(!pq.empty()){
//         //cout<<"Working";
//         int node = pq.top().second;
//         pq.pop();

//         for(auto it: graph[node]){
//             if(dist[it.first]>dist[node]+it.second){
//                 dist[it.first]=dist[node]+ it.second;
//             }
//             pq.push(make_pair(dist[it.first],it.first));
//         }
//     }

//     for(int i=1;i<=n;i++){
//         cout<<dist[i]<<" ";
//     }

// }

void Dijkstra(vector<pi> g[],int n,int source){
    priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > > pq;// min-heap ; In pair => (dist,from)
	vector<int> distTo(n+1,INT_MAX); 	// 1-indexed array for calculating shortest paths; 
	
	distTo[source] = 0;
	pq.push(make_pair(0,source));	// (dist,from)
	
	while( !pq.empty() ){
		int dist = pq.top().first;
		int prev = pq.top().second;
		pq.pop();
		
		vector<pair<int,int> >::iterator it;
		for( it = g[prev].begin() ; it != g[prev].end() ; it++){
			int next = it->first;
			int nextDist = it->second;
			if( distTo[next] > distTo[prev] + nextDist){
				distTo[next] = distTo[prev] + nextDist;
				pq.push(make_pair(distTo[next], next));
			}
		}
		
	}
	
	cout << "The distances from source, " << source << ", are : \n";
	for(int i = 1 ; i<=n ; i++)	cout << distTo[i] << " ";
	cout << "\n";
}

void adjList(vector<pair<int,int> > graph[],int u,int v,int wt){
    graph[u].push_back(make_pair(v,wt));
    graph[v].push_back(make_pair(u,wt));
}


int main(){
    int N=5;
    vector<pair<int,int>> graph[N+1];           //(adj,wt)
    adjList(graph,1,2,2);
    adjList(graph,1,4,1);
    adjList(graph,2,3,4);
    adjList(graph,4,3,3);
    adjList(graph,2,5,5);
    adjList(graph,3,5,1);

    Dijkstra(graph,N,1);
    return 0;
}