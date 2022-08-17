#include<bits/stdc++.h>
using namespace std;

template <typename T>
class Graph{
    map<T,list<T> > l;

    public:
    addEdge(int x,int y){
        l[x].push_back(y);
        l[y].push_back(x);
    }

    //recurrsive function for dfs
    void dfsHelper(T src, map <T,bool>&visited){
        cout<<src<<" ";
        visited[src]=true;
        for(T nbr: l[src]){
            if(!visited[nbr]){
                dfsHelper(nbr,visited);
            }
        }
    }

    void dfs(T src){
        map<T,bool> visited;
        //all false in first
        for(auto p:l){
            T node= p.first;
            visited[node]= false;
        }
        dfsHelper(src,visited);
    }

    
};

int main(){

    Graph <int> g;
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,4);
    g.addEdge(4,5);

    g.dfs(0);
    return 0;
}