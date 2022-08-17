#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define MOD 1e9+7
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
        int n,k;
        cin>>n>>k;
        vector<pair<ll,ll> >a(n);

        int x=k/2;
        x++;

        for(int i=0;i<n;i++){
            int p;
            cin>>p;
            a.push_back(make_pair(p,i));
        }

        sort(a.begin(),a.end(),greater<>());

        vector<ll>ans(n);

        for(int i=0;i<k/2;i++){
            ans[a[i].second]=a[i].first;
        }

        ans[a[x-1].second]=a[x-1].first;

        for(int i=x;i<k;i++){
            ans[a[i].second]=a[i].first;
        }

        cout<<a[x-1].first<<endl;

        for(int i=0;i<n;i++){
            if(ans[i]!=0)
                cout<<ans[i]<<" ";
        }
        cout<<endl;
	}
	return 0;
}
