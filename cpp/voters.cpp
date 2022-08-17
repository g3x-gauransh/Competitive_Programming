#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    map<int,int> m;
    for(int i=0;i<n1;i++){
        int x;
        cin>>x;
        m[x]++;
    }
    for(int i=0;i<n2;i++){
        int x;
        cin>>x;
        m[x]++;
    }
    for(int i=0;i<n3;i++){
        int x;
        cin>>x;
        m[x]++;
    }
    vector<int>ans;
    for(auto it:m){
        if(it.second>=2){
            ans.push_back(it.first);
        }
    }
    cout<<ans.size()<<endl;
    for(auto it:ans){
        cout<<it<<endl;
    }
}