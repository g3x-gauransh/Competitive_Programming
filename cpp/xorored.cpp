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
        int n;
        cin>>n;
        vector<int> v;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			v.pb(x);
		}
		sort(v.begin(),v.end());
		int max=v[n-1];
		int ans=0;
		for(int i=0;i<n;i++){
			ans|=(v[i]^max);
		}
		cout<<max<<" "<<ans<<endl;
	}
	return 0;
}
