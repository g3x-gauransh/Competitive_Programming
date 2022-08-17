#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define MOD 10000007
#define pb push_back
#define mp make_pair
#define inf 1e18
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define T int t;cin>>t;while(t--)
using namespace std;

int main()
{
	fast
	T
	{
        int n;
        cin>>n;
        vector<int> v(n);

        for(int i=0;i<n;i++)
            cin>>v[i];

        priority_queue<pair<int,int>>pq;
        for(int i=0;i<n;i++){
            if(v[i]){
                pq.push({v[i],i+1});
            }
        }
        vector<pair<int,int> >ans;
        while(pq.size()>1){
            auto t1=pq.top();
            pq.pop();
            auto t2=pq.top();
            ans.push_back({t1.second,t2.second});
            t1.first--;
            t2.first--;
            pq.pop();

            if(t1.first)
                pq.push(t1);
            if(t2.first)
                pq.push(t2);
        }

        cout<<ans.size()<<endl;
        for(auto it:ans){
            cout<<it.first<<" "<<it.second<<endl;
        }
    }
	return 0;
}
