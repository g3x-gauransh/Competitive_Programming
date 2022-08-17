#include<bits/stdc++.h>
using namespace std;

class Graph{
    int N;
    vector<int > graph[1000];
    public:
    Graph(int n){
        N=n;
    }

    void AdjList(int u,int v){
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    void printAdjList(){
        for(int i=1;i<=N;i++){
            cout<<i<<"->";
            for(auto it: graph[i]){
                cout<<it<<" ";
            }
            cout<<endl;
        }
    }

    vector<int> bfs(){
        vector<int> vis(N+1,0);
        vector<int> ans;
        for(int i=1;i<=N;i++){
            if(!vis[i]){
                queue <int> q;
                q.push(i);
                vis[i]=1;
                while(!q.empty()){
                    int node=q.front();
                    q.pop();
                    ans.push_back(node);
                    for(auto it: graph[node]){
                        if(!vis[it]){
                            vis[it]=1;
                            q.push(it);
                        }
                    }
                }
            }
        }
    return ans;
    }

    vector<int> dfs(){
        vector<int> vis(N+1,0);
        vector<int> ans;
        for(int i=1;i<=N;i++){
            if(!vis[i]){
                stack <int> q;
                q.push(i);
                vis[i]=1;
                while(!q.empty()){
                    int node=q.top();
                    q.pop();
                    ans.push_back(node);
                    for(auto it: graph[node]){
                        if(!vis[it]){
                            vis[it]=1;
                            q.push(it);
                        }
                    }
                }
            }
        }
    return ans;
    }
};

int main(){
    Graph g(5);
    g.AdjList(1,2);
    g.AdjList(2,3);
    g.AdjList(3,4);
    g.AdjList(1,5);
    g.AdjList(2,4);

    g.printAdjList();
    cout<<endl;
    vector<int> a1=g.bfs();
    auto a2 = g.dfs();

    for(auto it: a1){
        cout<<it<<" ";
    }
    cout<<endl;
    for(auto it: a2){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}