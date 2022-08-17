#include<bits/stdc++.h>
using namespace std;

vector<int> bfs(vector<int> graph[], int n){
    vector <int> visited(n+1,0);
    vector<int> ans;

    for(int i=1;i<=n;i++){
        if(!visited[i]){
            queue <int> q;
            q.push(i);
            visited[i]=1;

            while(!q.empty()){
                int node = q.front();
                q.pop();
                ans.push_back(node);
                //cout<<node<<" ";

                for(auto it: graph[node]){
                    
                    if(!visited[it]){
                        q.push(it);
                        visited[it]=1;
                    }
                }
            }
        }
    }
    return ans;
}

vector<int> dfs(vector<int> graph[],int n){
    vector<int> ans;
    vector<int> vis(n+1,0);

    for(int i=1;i<=n;i++){
        if(!vis[i]){
            vis[i]=1;
            stack <int> s;
            s.push(i);
            while(!s.empty()){
                int node= s.top();
                s.pop();
                ans.push_back(node);
                for(auto it: graph[node]){
                    if(!vis[it]){
                        s.push(it);
                        vis[it]=1;
                    }
                }
            }
        }    
    }
    return ans;
}

void adjList(vector<int> arr[],int u,int v){
    arr[u].push_back(v);
    arr[v].push_back(u);
}

int main(){
    int n=7;
    vector<int> graph[n+1];
        
    adjList(graph,1,2);
    adjList(graph,2,3);
    adjList(graph,4,6);
    adjList(graph,2,7); 
    adjList(graph,7,5);
    adjList(graph,3,5);

    // for(int i=1;i<=n;i++){
    //     cout<<i<<"->";
    //     for(int j=0;j<graph[i].size();j++){
    //         cout<<graph[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    vector<int> an= bfs(graph,n);
    for(auto it:an){
        cout<<it<<" ";
    }
    cout<<endl;
    vector<int> df=dfs(graph,n);
    for(auto it:df){
        cout<<it<<" ";
    }
    return 0;
}