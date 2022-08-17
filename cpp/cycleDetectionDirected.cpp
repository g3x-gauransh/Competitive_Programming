#include<bits/stdc++.h>
using namespace std;

bool cycleCheck(vector<int> graph[],vector<int> vis,vector<int> dfsvis,int node){
    vis[node]=1;
    dfsvis[node]=1;
    for(auto it: graph[node]){
        if(!vis[it])
        {
            if(cycleCheck(graph,vis,dfsvis,it))
                return true;
        }
        else if(dfsvis[it])
            return true;    
    }
    dfsvis[node]=0;
    return false;
}

bool dfsCycleCheck(vector<int> graph[],int n){
    vector<int> vis(n+1,0);
    vector<int> dfsvis(n+1,0);

    for(int i=1;i<=n;i++){
        if(!vis[i]){
            if(cycleCheck(graph,vis,dfsvis,i))
                return true;
        }
    }
    return false;
}

void AdjList(vector<int> graph[],int u,int v){
        graph[u].push_back(v);
    }

void printAdjList(vector<int> graph[],int n){
        for(int i=1;i<=n;i++){
            cout<<i<<"->";
            for(auto it: graph[i]){
                cout<<it<<" ";
            }
            cout<<endl;
        }
    }

int main(){
    int N=9;
    vector<int> graph[N+1];   

    AdjList(graph,1,2);
    AdjList(graph,2,3);
    AdjList(graph,3,4);
    AdjList(graph,4,6);
    AdjList(graph,3,5);
    AdjList(graph,5,6);
    AdjList(graph,7,2);
    AdjList(graph,7,8);
    AdjList(graph,8,9);
    AdjList(graph,9,7);

    printAdjList(graph,N);

    if(dfsCycleCheck(graph,N))
        cout<<"Cycle detected"<<endl;
    else
        cout<<"No Cycle";

    return 0;
}