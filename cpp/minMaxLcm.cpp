#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define MOD 1000000007
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
		ll x,k;
        cin>>x>>k;
        ll maxi=x*k*((x*k)-1);
        ll mini=2*x;
        cout<<mini<<" "<<maxi<<endl;
	}
	return 0;
}
