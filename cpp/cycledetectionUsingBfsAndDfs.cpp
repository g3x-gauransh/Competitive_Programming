#include<bits/stdc++.h>
using namespace std;

void adjList(vector<int> graph[],int u,int v){
    graph[u].push_back(v);
    graph[v].push_back(u);
}

bool cycleDetectBFS(vector<int> graph[],int n){
    int flag=0;
    vector<int> vis(n+1,0);
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            queue<pair<int,int>> q;
            q.push(make_pair(i,0));
            while(!q.empty()){
                pair<int,int> node = q.front();
                q.pop();
                for(auto it: graph[node.first]){
                    if(!vis[it]){
                        q.push(make_pair(it,node.first));
                        vis[it]=1;
                    }
                    else if(it!=node.second && vis[it]){
                        flag=1;
                        break;
                    }
                }
            }
            if(flag){
                break;
            }
        }
        if(flag){
            break;
        }
    }
    if(flag){
        return true;
    }
    else
    return false;
}

bool cycleDetectionDFS(vector<int> graph[],int n){
    int flag=0;
    vector<int>vis(n+1,0);
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            stack<pair<int,int>> s;
            s.push(make_pair(i,-1));
            while(!s.empty()){
                pair <int,int> node= s.top();
                s.pop();
                for(auto it: graph[node.first]){
                    if(!vis[it]){
                        vis[it]=1;
                        s.push(make_pair(it,node.first));
                    }
                    else if(it!= node.second){
                        flag=1;
                    }
                }
            }
        }
    }
    if(flag)    
        return true;
    else 
        return false;
}

int main(){
    int N=11;
    vector<int> graph[N+1];
    adjList(graph,1,2);
    adjList(graph,2,4);
    adjList(graph,3,5);
    adjList(graph,5,10);
    adjList(graph,5,6);
    adjList(graph,6,7);
    adjList(graph,7,8);
    adjList(graph,8,9);
    adjList(graph,8,11);
    adjList(graph,9,10);

    //if(cycleDetectBFS(graph,N))
    if(cycleDetectionDFS(graph,N))
        cout<<"True";
    else
        cout<<"False";
    
    return 0;
}