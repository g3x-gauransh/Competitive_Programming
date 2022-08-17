#include<bits/stdc++.h>
using namespace std;

int main(){
    stack <pair<int,int> > s;
    int n;
    cin>>n;
    vector < pair<int,int> > v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(make_pair(x,i));
    }
    vector<int> ans(n,-1);
    for(int i=0;i<n;i++){
        if(s.empty()){
            s.push(make_pair(v[i].first,v[i].second));
        }
        else{
            if(s.top().first < v[i].first){
                while(!s.empty() && s.top().first < v[i].first){
                    ans[s.top().second] = v[i].first;
                    s.pop();
                }
                s.push(make_pair(v[i].first,v[i].second));
            }
            else{
                s.push(make_pair(v[i].first,v[i].second));
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}