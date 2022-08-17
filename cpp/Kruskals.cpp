#include<bits/stdc++.h>
using namespace std;

struct node{
    int u;
    int v;
    int wt;
    node(int first,int second,int weight){
        u=first;
        v=second;
        wt=weight;
    }
};

bool comp(node a,node b){
    return a.wt<b.wt;
}

int findParent(int u,vector<int> &parent){
    if(u==parent[u])    
        return u;
    return parent[u]=findParent(parent[u],parent);
}

void unionn(int u,int v,vector<int> &parent,vector<int> &rank){
    u=findParent(u,parent);
    v=findParent(v,parent);

    if(rank[u]<rank[v]){
        parent[u]=v;
    }
    else if(rank[v]<rank[u]){
        parent[v]=u;
    }
    else{
        parent[v]=u;
        rank[u]++;
    }
}

int main(){
    int N,m;
    cin>>N>>m;
    vector<node>edge;
    for(int i=0;i<m;i++){
        int u,v,wt;
        cin>>u>>v>>wt;
        edge.push_back(node(u,v,wt));
    }

    sort(edge.begin(),edge.end(),comp);

    vector<int> parent(N);
    vector<int> rank(N,0);
    for(int i=0;i<N;i++){
        parent[i]=i;
    }

    int cost=0;

    vector<pair<int,int>> mst;

    for(auto it:edge){
        if(findParent(it.v,parent)!= findParent(it.u,parent)){
            cost+=it.wt;
            unionn(it.u,it.v,parent,rank);
            mst.push_back(make_pair(it.u,it.v));
        }
    }
    cout<<cost<<endl;

    for(auto it: mst){
        cout<<it.first<<"-"<<it.second<<endl;
    }
    return 0;
}