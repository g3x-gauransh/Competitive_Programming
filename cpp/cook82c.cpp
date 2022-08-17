#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;
    vector<ll> a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int beg=0;
    sort(a.begin(),a.end());
    queue<ll> q;

    
    int end_p=n-1;
    int count=0;

    while(m--){
        int qu;
        cin>>qu;
        ll ans;
        for(;count<qu;count++){
            if(end_p>=0 &&(q.empty() || a[end_p]>=q.front())){
                ans=a[end_p];
                end_p--;
            }
            else{
                ans=q.front();
                q.pop();
            }
            q.push(ans/2);
        }
        cout<<ans<<endl;
    }

    return 0;
}