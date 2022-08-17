#include<bits/stdc++.h>
#define E 8
#define V 5
using namespace std;

int addEdge(int graph[][E],int u, int v,int e){
    graph[u][e]=1;
    if(u!=v){
        graph[v][e]=-1;
    }
}

int main(){
    int graph[V][E];
    memset(graph,0,sizeof(graph));
    addEdge(graph,0,1,0);
    addEdge(graph,0,4,1);
    addEdge(graph,1,1,2);
    addEdge(graph,1,2,3);
    addEdge(graph,1,3,4);
    addEdge(graph,1,4,5);
    addEdge(graph,3,2,6);
    addEdge(graph,3,4,7);

    for(int i=0;i<V;i++){
        cout<<i<<":";
        for(int j=0;j<E;j++){
            cout<<" "<<graph[i][j];
        }
        cout<<endl;
    }
    return 0;
}