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
        ll n;
        cin>>n;
        vector<ll> a(n);

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        ll total=n*(n-1);

        map<ll,ll>m;
        for(int i=0;i<n;i++){
            m[a[i]]++;
        }

        ll count=0;

        for(auto it:m){(
            count+=(it.second-1)*(it.second));
        }

        ll ans= total-count;
        cout<<ans<<endl;
	}
	return 0;
}
